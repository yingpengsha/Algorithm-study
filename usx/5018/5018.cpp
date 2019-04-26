// http://acm.usx.edu.cn/AspNet/Question.aspx?qid=5018
// Problem Description
// 判断5个数中的最大值

// Input
// 输入5个整数,求最大数。 处理到文件结束

// Output
// 输出5个数中的最大数

#include <iostream>
using namespace std;
int main()
{
    int num, max;
    while (cin >> max)
    {
        for (int i = 0; i < 4; i++)
        {
            cin >> num;
            max = num > max ? num : max;
        }
        cout << max << endl;
    }
    system("pause");
    return 0;
}