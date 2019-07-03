// Problem Description
// 由键盘输入3个浮点数(建议使用double型)，计算以这3个数为边长的三角形的面积。若这3个数不构成三角形,则不输出。

// Input
// 测试数据有多组，处理到文件尾。每组测试输入3个浮点数。

// Output
// 每组输出以这3个数为边长的三角形的面积(保留6位小数)。

#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    double s, a, b, c;
    while (cin >> a >> b >> c)
    {
        if (a < b + c && b < a + c && c < a + b)
        {
            s = (a + b + c) / 2;
            cout << fixed << setprecision(6) << sqrt(s * (s - a) * (s - b) * (s - c)) << endl;
        }
    }
    system("pause");
    return 0;
}