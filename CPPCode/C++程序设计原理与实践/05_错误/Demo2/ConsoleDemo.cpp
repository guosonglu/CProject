#include <iostream>
#include "ConsoleDemo.h"
using namespace std;
//异常处理
class Bad_area {};

int area(int length, int width) {
	if (length <= 0 || width <= 0)
	{
		throw Bad_area{};
	}
	return length * width;
}

double some_function() {
	double d = 0;
	cin >> d;
	if (!cin)
	{
		error("输入错误");
	}
	return d;
}

int main()
{
	//自定义异常
	try
	{
		cout << area(0, 1) << endl;
	}
	catch (Bad_area)
	{
		cout << "出现异常了" << endl;
	}
	//范围异常
	try
	{
		vector<int> nums(5);
		nums[5];
	}
	catch (out_of_range& e)
	{
		cout << "out_of_range:" << e.what() << endl;
	}
	//输入异常
	try {
		cout << "请输入一个double:";
		cout << "输入的double为：" << some_function() << endl;
	}
	catch (runtime_error& e)
	{
		cerr << "runtime_error:" << e.what() << endl;
		return 1;
	}
	//窄化错误
	try {
		int x1 = narrow_cast<int>(2.9);
	}
	catch (runtime_error& e) {
		cout << "runtime_error:" << e.what() << endl;
	}
}