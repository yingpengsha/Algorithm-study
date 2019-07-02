// Problem Description
// 编写一个程序，从5个整数中找出最小的数。

// Input
// 测试数据有多组，处理到文件尾。每组测试数据在同一行输入5个整数。

// Output
// 每组输出这5个整数的最小数。

#include <iostream>
using namespace std;
int main()
{
    int num[5];
    while (cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4])
    {
        for (int i = 1; i < 5; i++)
        {
            if (num[i] < num[0])
                num[0] = num[i];
        }
        cout << num[0] << endl;
    }
    system("pause");
    return 0;
}