// Problem Description
// 输出字符串的子串。

// Input
// 每行的开始是一个正整数k,然后是一个字符串s，k和s之间用空格分开。(k大于0且小于等于s的长度）

// Output
// 输出从头开始的长度为k的子串。

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    string str;
    while (cin >> n)
    {
        getline(cin, str);
        for (int i = 1; i < n + 1; i++)
        {
            cout << str[i];
        }
        cout << endl;
    }
    system("pause");
    return 0;
}