// Problem Description
// 编写一个程序，求3个整数之和。
// (1)只使用main函数。
// (2)通过求两个整数之和的函数加以实现(自己设计函数)。

// Input
// 测试数据有多组，处理到文件尾。每组测试数据在同一行输入3个整数a,b,c。

// Output
// 每组输出a、b、c之和。

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    while (cin >> a >> b >> c)
    {
        cout << a + b + c << endl;
    }
    system("pause");
    return 0;
}