// http://acm.usx.edu.cn/AspNet/Question.aspx?qid=5017
// Problem Description
// 输入一对正整数x和y，输出二者的最小公倍数。处理到文件结束

#include <algorithm>
#include <iostream>
using namespace std;
int gcd(int x, int y);
int main()
{
    int x, y;
    while (cin >> x >> y)
    {
        cout << x * y / gcd(max(x, y), min(x, y)) << endl;
    }
    system("pause");
    return 0;
}
int gcd(int x, int y)
{
    while (x % y != 0)
    {
        int r = x % y;
        x = y;
        y = r;
    }
    return y;
}