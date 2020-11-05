#include <iostream>
#include <fstream>
using namespace std;
//统计文件中单词数
int main()
{
	string word;
	ifstream in("file.txt");
	int i = 0;
	while (in >> word)
	{
		i++;
	}
	cout << "文件中有" << i << "个单词";
}