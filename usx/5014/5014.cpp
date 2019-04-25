// http://acm.usx.edu.cn/AspNet/Question.aspx?qid=5014
// Problem Description
// 一条小路n米长，两旁都每隔一米种一棵树，可共种树多少棵？

// Input
// 输入包含多组测试数据，每组只有一行，包括1个不大于1000的正整数n.

// Output
// 输出数据也只有一行，输出最多可种树的数量。

#include <iostream>
using namespace std;
int main()
{
    int num;
    while (cin >> num)
    {
        cout << 2 + 2 * num << endl;
    }
    system("pause");
    return 0;
}