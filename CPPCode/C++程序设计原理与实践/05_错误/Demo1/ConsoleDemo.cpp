#include <iostream>
#include <stdexcept>
#include "ConsoleDemo.h"
using namespace std;

int main()
{
	int x = -1;
	if (x <= 0)
	{
		error("参数范围错误");
	}
}