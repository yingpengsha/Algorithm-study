// Problem Description
// 计算字符串的长度。

// Input
// 每行一个字符串。

// Output
// 针对每行字符串，输出该串的长度。

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    while (getline(cin, str))
    {
        cout << str.length() << endl;
    }
    system("pause");
    return 0;
}