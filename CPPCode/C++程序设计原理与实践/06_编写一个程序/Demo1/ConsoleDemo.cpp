#include <iostream>
#include "ConsoleDemo.h"
using namespace std;
//第一个版本的计算器，只能按前后顺序进行计算
int main()
{
	try {
		cout << "请输入一个表达式（我们可以处理+，-，*和/）" << endl;
		cout << "输入x结束表达式：";
		int lval = 0;
		int rval;
		cin >> lval;
		if (!cin)
		{
			error("第一个参数错误");
		}
		for (char op; cin >> op;)
		{
			if (op != 'x')
			{
				cin >> rval;
			}
			if (!cin)
			{
				error("第二个操作数错误");
			}
			switch (op)
			{
			case '+':
				lval += rval;
				break;
			case '-':
				lval -= rval;
				break;
			case '*':
				lval *= rval;
				break;
			case '/':
				lval /= rval;
				break;
			default:
				cout << "Result:" << lval << endl;
				return 0;
			}
		}
		error("表达式错误");
	}
	catch (runtime_error& e) {
		cout << "runtime_error:" << e.what() << endl;
	}
}