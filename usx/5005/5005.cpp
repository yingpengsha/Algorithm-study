// http://acm.usx.edu.cn/AspNet/Question.aspx?qid=5005
// Problem Description
// 闰年判断，规则是能被4整除但不能被100整除或者能被400整除的年份是闰年。

// Input
// 先输入测试组数n,然后输入 n 个年份 y。

// Output
// 判断每个年份y，若  y 是闰年输出 YES，否则输出 NO。

#include <iostream>
using namespace std;
int main()
{
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int year;
        cin >> year;
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    system("pause");
    return 0;
}