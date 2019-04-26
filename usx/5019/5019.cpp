// http://acm.usx.edu.cn/AspNet/Question.aspx?qid=5019
// Problem Description
// 输入一个数求出由1加至此数的总和

// Input
// 一个正整数N

// Output
// 求1+2+3....+N的和, 处理到文件结束

#include <iostream>
using namespace std;
int main()
{
    int num, sum;
    while (cin >> num)
    {
        sum = 0;
        for (int i = 1; i <= num; i++)
            sum += i;
        cout << sum << endl;
    }
    system("pause");
    return 0;
}