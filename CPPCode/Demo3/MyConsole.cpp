#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    vector<string> v;
    ifstream in("file.txt");
    string line;
//     in >> line;
//     cout << line << endl;
    while (getline(in,line))
    {
        v.push_back(line);
    }
    //遍历vector容器
    for (int i=0;i<v.size();i++)
    {
        cout << i << ":" << v[i] << endl;
    }
}
