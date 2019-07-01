// http://acm.usx.edu.cn/AspNet/Question.aspx?qid=5020
// Problem Description
// 1! = 1
// 2! = 1*2
// 3! = 1*2*3
// n! = 1*2*3*4.....*n

// Input
// 输入数据首先包含一个整数T，表示测试实例的个数，然后是T组测试数据。每组测试数据包括一个正整数n(n<12)

// Output
// 输出整数n的阶乘

#include <iostream>
using namespace std;
int main()
{
    int count, num, sum;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> num;
        sum = (num == 0 ? 0 : 1);
        for (int j = 2; j <= num; j++)
            sum *= j;
        cout << sum << endl;
    }
    system("pause");
    return 0;
}