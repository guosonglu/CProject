﻿// Demo1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
{
    cout <<"输出十进制："<< dec << 15 << endl;
    cout << "输出八进制：" << oct << 15 << endl;
    cout << "输出十六进制：" << hex << 15 << endl;
    cout << "输出浮点数：" << 3.14159 << endl;
    cout << "输出字符：" << char(68) << endl;
    cout << "字符串拼接：" << "第一段""第二段" << endl;
    //输入
    int num1;
    cout << "请输入一个数:";
    cin >> num1;
    cout << "该数用八进制表示为：" << oct << num1 << endl;
    cout << "该数用十六进制表示为：" << hex << num1 << endl;
    //调用system,调用系统命令
    system("time");
    //string
    string aa;
    string bb(" world");
    aa = "hello";
    cout << aa + bb + "!" << endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
