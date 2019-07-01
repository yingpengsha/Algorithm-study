// Problem Description
// 编写一个求a+|b|的程序，其中a、b为两个整数。

// Input
// 测试数据有多组，处理到文件尾。每组测试数据在同一行输入2个整数a,b。

// Output
// 每组输出a+|b|的值。

#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        cout << a + abs(b) << endl;
    }
    system("pause");
    return 0;
}