// Problem Description
// 编程序。把3个浮点数按升序排列。

// Input
// 测试数据有多组，处理到文件尾。每组测试数据在同一行输入3个浮点数。

// Output
// 每组按升序输出这3个浮点数(输出时保留6位小数)。

#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    double num[3], temp;
    while (cin >> num[0] >> num[1] >> num[2])
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2 - i; j++)
            {
                if (num[j] > num[j + 1])
                {
                    temp = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = temp;
                }
            }
        }
        for (int i = 0; i < 2; i++)
        {
            cout << fixed << setprecision(6) << num[i] << " ";
        }
        cout << fixed << setprecision(6) << num[2] << endl;
    }
    system("pause");
    return 0;
}