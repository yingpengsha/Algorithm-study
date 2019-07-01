// http://acm.usx.edu.cn/AspNet/Question.aspx?qid=5009
// Problem Description
// 输入年份、月份，求该月的天数。闰年判断规则是能被4整除但不能被100整除或者能被400整除的年份是闰年。

// Input
// 输入若干个年份和月份,输入到文件尾结束。

// Output
// 输出对应年月的天数。

#include <iostream>
using namespace std;
int main()
{
    int monthList[12] = {31,
                         28,
                         31,
                         30,
                         31,
                         30,
                         31,
                         31,
                         30,
                         31,
                         30,
                         31};
    int year, month;
    while (cin >> year >> month)
    {
        monthList[1] = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ? 29 : 28;
        cout << monthList[month - 1] << endl;
    }
    system("pause");
    return 0;
}