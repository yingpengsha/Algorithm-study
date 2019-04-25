// http://acm.usx.edu.cn/AspNet/Question.aspx?qid=5011
// Problem Description
// 求最小值。

// Input
// 输入2个整数。

// Output
// 输出内容为其中的最小值。
// 本题只有一组测试!

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << (a < b ? a : b) << endl;
    system("pause");
    return 0;
}