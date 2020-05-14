// StaticLib1Call.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "../StaticLib1/LibTest1.h"

#pragma comment(lib,"../Debug/StaticLib1.lib")

int main()
{
    printf("%d", add(1, 2));
}