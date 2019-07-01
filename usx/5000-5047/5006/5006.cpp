// http://acm.usx.edu.cn/AspNet/Question.aspx?qid=5006
// Problem Description
// 输入三边判断是否能构成三角形。

// Input
// 输入若干组数据，每组三个整数a,b,c，当a,b,c全为0时结束输入（该组数据不必输出）。

// Output
// 若a,b,c能构成三角形输出YES，否则输出NO。

#include <iostream>
using namespace std;
int main()
{
    while (true)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
        {
            break;
        }
        if (a < b + c && b < a + c && c < a + b)
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