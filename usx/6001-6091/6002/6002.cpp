// Problem Description
// 编写一个程序，从键盘输入两个整数，输出这两个数之和。

// Input
// 测试数据有多组，处理到文件尾。每组测试数据在同一行输入2个整数a,b。

// Output
// 每组输出a+b之和。

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        cout << a + b << endl;
    }
    system("pause");
    return 0;
}