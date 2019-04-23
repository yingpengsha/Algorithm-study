// http://acm.usx.edu.cn/AspNet/Question.aspx?qid=5001
// Problem Description
// 求数列之和

// Input
// 输入数据首先包含一个整数T，表示测试实例的个数，然后是T组测试数据。每组测试数据分别包含一个整数N, 以及随后的N个整数。

// Output
// 对于每组测试，分别输出该组数列之和。

#include <iostream>
using namespace std;
int main()
{
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int countNum, sum = 0;
        cin >> countNum;
        for (int j = 0; j < countNum; j++)
        {
            int num;
            cin >> num;
            sum += num;
        }
        cout << sum << endl;
    }
    system("pause");
    return 0;
}