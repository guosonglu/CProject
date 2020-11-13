#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	//定义
	vector<string> names = { "kanl","plato","hume","kierkegaard" };
	vector<int> v2(3);  //定义一个vector,并初始化前三个元素
	vector<int> v = { 7,9,5,8,6 };
	//添加元素
	v.push_back(10);
	//遍历
	for (int x : v)
	{
		cout << x << endl;
	}
	vector<double> temps;
	for (double temp; cin >> temp;)
	{
		temps.push_back(temp);
	}
	cout << "一共输入了：" << temps.size() << "个数";
	sort(v.begin(), v.end());
	for (int x2 : v)
	{
		cout << x2 << endl;
	}
}