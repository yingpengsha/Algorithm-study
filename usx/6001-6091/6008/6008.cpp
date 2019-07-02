// Problem Description
// 编程序。依次输入10个数，找出其中的最大数。

// Input
// 测试数据有多组，处理到文件尾。每组测试数据在同一行输入10个浮点数。

// Output
// 每组输出这10个浮点数中的最大数(保留6位小数)。

#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    double max, num;
    while (cin >> max)
    {
        for (int i = 0; i < 9; i++)
        {
            cin >> num;
            if (num > max)
                max = num;
        }
        cout << fixed << setprecision(6) << max << endl;
    }
    system("pause");
    return 0;
}