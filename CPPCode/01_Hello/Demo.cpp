#include <iostream>

int main() {
	//std:名称空间，相当于文件在文件夹里
	//:: 作用域操作符
	//std::endl 换行
	std::cout << "Hello World!"<<std::endl;
	int v1;
	v1 = 12;
	std::cout << v1 << std::endl;
	//输入一个数，打印
	std::cout << "请输入一个数:";
	std::cin >> v1;
	std::cout << v1 << std::endl;
	//计算两数之和
	std::cout << "请输入两个数：" << std::endl;
	int v2, v3;
	std::cin >>v2>>v3;
	std::cout << v2 << "加" << v3 << "等于" << v2 + v3 << std::endl;
	return 0;  //正常返回0，不正常返回其他值
}