// Problem Description
// 输出字符串的子串。

// Input
// 第一行一个正整数N, 然后有N组测试。
// 每组测试的开始是一个正整数k,然后是一个字符串s，k和s之间用空格分开。(k大于0且小于等于s的长度）

// Output
// 对于每组测试，输出从头开始的长度为k的子串。

#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        int num;
        string str;
        cin >> num;
        getline(cin, str);
        for (int i = 1; i < num + 1; i++)
        {
            cout << str[i];
        }
        cout << endl;
    }
    system("pause");
    return 0;
}