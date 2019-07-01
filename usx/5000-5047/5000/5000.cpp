// http://acm.usx.edu.cn/AspNet/Question.aspx?qid=5000
// Problem Description
// 判断一个数是否为素数

// Input
// 输入数据首先包含一个整数T，表示测试实例的个数，然后是T组测试数据。每组测试数据包含一个正整数n. (n>1)

// Output
// 如果 n 为素数则输出 yes
// 反之输出no

#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int num;
        bool flag = true;
        cin >> num;
        for (int j = 2; j < sqrt(num + 1); j++)
        {
            if (num % j == 0)
            {
                flag = false;
                cout << "no" << endl;
                break;
            }
        }
        if (flag)
        {
            cout << "yes" << endl;
        }
    }
    system("pause");
    return 0;
}