// Problem Description
// 求两个正整数m和n的最大公约数

// Input
// 测试数据有多组，处理到文件尾。每组测试数据在同一行输入两个正整数m和n。

// Output
// 每组输出m和n的最大公约数。

#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    while (cin >> a >> b)
    {
        if (a < b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        while (a % b != 0)
        {
            temp = a % b;
            a = b;
            b = temp;
        }
        cout << b << endl;
    }
    system("pause");
    return 0;
}