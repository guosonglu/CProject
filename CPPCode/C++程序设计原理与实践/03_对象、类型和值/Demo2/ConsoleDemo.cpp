#include <iostream>
using namespace std;
//变量不初始化使用会报错
int main()
{
	double x;
	double y = x;
	double z = 2.0 + x;
}