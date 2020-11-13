#include <iostream>
#include <vector>
#include "ConsoleDemo.h"
using namespace std;

int main()
{
	vector<string> words;
	for (string temp; cin >> temp;)
	{
		words.push_back(temp);
	}
	cout << "单词长度为：" << words.size() << endl;

	sort(words);
	//不重复打印
	for (int i = 0; i < words.size(); i++)
	{
		if (i == 0 || words[i - 1] != words[i])
		{
			cout << words[i] << endl;
		}
	}
}