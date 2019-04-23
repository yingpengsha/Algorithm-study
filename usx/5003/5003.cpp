// http://acm.usx.edu.cn/AspNet/Question.aspx?qid=5003
// Problem Description
// 求3个整数中的最大者。

// Input
// 输入3个整数a,b,c。
// 本题只有一组测试!

// Output
// 输出内容为a,b,c中的最大者。

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, max;
    cin >> a >> b >> c;
    max = a > b ? a : b;
    max = c > max ? c : max;
    cout << max << endl;
    system("pause");
    return 0;
}