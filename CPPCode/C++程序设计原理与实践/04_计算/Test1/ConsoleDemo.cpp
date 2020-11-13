#include <iostream>
#include <vector>
using namespace std;

int main()
{
	double a, b;
	while (cin >> a && cin >> b)
	{
		cout << "输入的数为：" << a << "," << b << endl;
		cout << "较大的数为：" << ((a > b) ? a : b) << endl;
	}
}