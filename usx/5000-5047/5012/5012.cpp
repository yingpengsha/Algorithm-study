// http://acm.usx.edu.cn/AspNet/Question.aspx?qid=5012
// Problem Description
// 求实数的绝对值。

// Input
// 输入数据有多组，每组占一行，每行包含一个实数。

// Output
// 对于每组输入数据，输出它的绝对值，要求每组数据输出一行，结果保留两位小数。

#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    float num;
    while (cin >> num)
    {
        cout << fixed << setprecision(2) << abs(num) << endl;
    }
    system("pause");
    return 0;
}