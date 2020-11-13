#include <iostream>
using namespace std;

int main()
{
	cout << "请输入你的名字:" << endl;
	string first_name;
	int age;
	cin >> first_name;
	cin >> age;
	cout << "Hello," << first_name << "," << age;
}