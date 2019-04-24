// http://acm.usx.edu.cn/AspNet/Question.aspx?qid=5010
// Problem Description
// 求5门课程成绩的平均分。

// Input
// 输入5个整数，表示5门课程成绩。
// 本题只有一组测试!

// Output
// 输出内容为平均分，结果保留1位小数。

#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << fixed << setprecision(1) << (a + b + c + d + e) / 5.0 << endl;
    system("pause");
    return 0;
}