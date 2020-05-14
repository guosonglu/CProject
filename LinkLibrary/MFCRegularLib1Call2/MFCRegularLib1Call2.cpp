// MFCRegularLib1Call2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

#pragma comment(lib,"..\\Debug\\MFCRegularLib1.lib")

__declspec(dllimport) void showDialog();

int main()
{
    //非MFC的程序也可以调用MFC的DLL，并使用内部的资源
    showDialog();
}

