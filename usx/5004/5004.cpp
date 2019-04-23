// http://acm.usx.edu.cn/AspNet/Question.aspx?qid=5004
// Problem Description 
// 求[1,n]之和。

// Input
// 输入一个正整数n。
// 本题只有一组测试!

// Output
// 输出1+2+……+n之和。

#include <iostream>
using namespace std;
int main()
{
    int count,sum=0;
    cin>>count;
    for (int i = 1; i <= count;i++)
    {
        sum += i;
    }
    cout << sum << endl;
    system("pause");
    return 0;
}