// Problem Description
// 计算字符串的长度。

// Input
// 第一行一个正整数N, 然后有N行字符串。
// 每行一个字符串。

// Output
// 针对每行字符串，输出该串的长度。

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N;
    cin >> N;
    cin.get();
    while (N--)
    {
        string str;
        getline(cin, str);
        cout << str.length() << endl;
    }
    system("pause");
    return 0;
}