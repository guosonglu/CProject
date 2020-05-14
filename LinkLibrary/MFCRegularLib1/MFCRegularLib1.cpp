// MFCRegularLib1.cpp: 定义 DLL 的初始化例程。
//

#include "pch.h"
#include "framework.h"
#include "MFCRegularLib1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
// CMFCRegularLib1App

BEGIN_MESSAGE_MAP(CMFCRegularLib1App, CWinApp)
END_MESSAGE_MAP()


// CMFCRegularLib1App 构造

CMFCRegularLib1App::CMFCRegularLib1App()
{
	// TODO:  在此处添加构造代码，
	// 将所有重要的初始化放置在 InitInstance 中
}


// 唯一的 CMFCRegularLib1App 对象

CMFCRegularLib1App theApp;


// CMFCRegularLib1App 初始化

BOOL CMFCRegularLib1App::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}


int CMFCRegularLib1App::ExitInstance()
{
	// TODO: 在此添加专用代码和/或调用基类

	return CWinApp::ExitInstance();
}

void showDialog() {
//资源切换
//方法1
 	AFX_MANAGE_STATE(AfxGetStaticModuleState());  //作用：代码执行到此处，资源从DLL中找，而不从调用端找
// 	CDialog dlg(IDD_DIALOG1);
// 	dlg.DoModal();
//方法二
// 	HINSTANCE hSaveInst= AfxGetResourceHandle();  //获得应用程序的实例句柄
// 	AfxSetResourceHandle(theApp.m_hInstance);  //设置资源句柄为当前DLL实例句柄
// 	CDialog dlg(IDD_DIALOG1);
// 	dlg.DoModal();
// 	AfxSetResourceHandle(hSaveInst);  //函数执行完，将资源句柄设置回应用程序句柄
	CDialog dlg(IDD_DIALOG1);
	dlg.DoModal();
}

void test1() {
	AfxMessageBox(L"aa");
}
