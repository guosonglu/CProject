// InJect.cpp : 定义应用程序的入口点。
//

#include "framework.h"
#include "InJect.h"


BOOL Inject(LPCTSTR szModule, DWORD dwID) {
    HANDLE hProcess=OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_CREATE_THREAD | PROCESS_VM_OPERATION | PROCESS_VM_WRITE, FALSE, dwID);
    if (!hProcess)
    {
        MessageBox(NULL, TEXT("进程链接失败"), TEXT("提示"), MB_OK);
        return FALSE;
    }
    int cByte = (_tcslen(szModule) + 1) * sizeof(TCHAR);
    LPVOID pAddr = VirtualAllocEx(hProcess,NULL,cByte,MEM_COMMIT,PAGE_READWRITE);
    if (!pAddr||!WriteProcessMemory(hProcess,pAddr,szModule,cByte,NULL))
    {
        return FALSE;
    }
#ifdef _UNICODE
    PTHREAD_START_ROUTINE pfnStartAddr = (PTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandle(L"Kernel32"),"LoadLibraryW");
#else
	PTHREAD_START_ROUTINE pfnStartAddr = (PTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandle(L"Kernel32"), "LoadLibraryA");
#endif // _UNICODE
    if (!pfnStartAddr)
    {
        return FALSE;
    }
    DWORD dwThreadID = 0;
    HANDLE hremoteThread = CreateRemoteThread(hProcess, NULL, 0, pfnStartAddr, pAddr, 0, &dwThreadID);
    if (!hremoteThread)
    {
        return FALSE;
    }
    CloseHandle(hremoteThread);
    CloseHandle(hProcess);
    return TRUE;
}


int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPWSTR    lpCmdLine,
    _In_ int       nCmdShow)
{
    if (Inject(L"D:\CProject\LinkLibrary\Debug\DynamicLib1.dll", 7316))
    {
        MessageBox(NULL, TEXT("成功"), TEXT("提示"), MB_OK);
    }
    else {
        MessageBox(NULL, TEXT("失败"), TEXT("提示"), MB_OK);
    }
    return 0;
}