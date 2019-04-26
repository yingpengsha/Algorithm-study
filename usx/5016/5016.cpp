// http://acm.usx.edu.cn/AspNet/Question.aspx?qid=5016
// Problem Description
// 求3个整数中的最大偶数。

// Input
// 输入3个整数a,b,c(在int型范围)。
// 有多个测试数据，处理到输入结束。

// Output
// 每行一个偶数，输出内容为a,b,c中的最大偶数。若没有偶数，则输出0。

#include <iostream>
using namespace std;
int main()
{
    int num[3], result;
    bool flag;
    while (cin >> num[0] >> num[1] >> num[2])
    {
        flag = false;
        result = 0;
        for (int i = 0; i < 3; i++)
        {
            if (num[i] % 2 == 0 && (flag == false || num[i] > result))
            {
                result = num[i];
            }
        }
        cout << result << endl;
    }
    system("pause");
    return 0;
}