// Problem Description
// 从5个数中取最大数及最小数

// Input
// 测试数据有多组，处理到文件尾。每组测试数据在同一行输入5个浮点数。

// Output
// 每组输出其中的最大数及最小数(保留6位小数)。

#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    double num[5], min, max;
    while (cin >> num[0])
    {
        min = num[0];
        max = num[0];
        for (int i = 1; i < 5; i++)
        {
            cin >> num[i];
            if (num[i] > max)
                max = num[i];
            else if (num[i] < min)
                min = num[i];
        }
        cout << fixed << setprecision(6) << max << " " << fixed << setprecision(6) << min << endl;
    }
    system("pause");
    return 0;
}