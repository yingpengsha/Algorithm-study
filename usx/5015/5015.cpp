// http://acm.usx.edu.cn/AspNet/Question.aspx?qid=5015
// Problem Description
// 箱子里有a个白色乒乓球，b个红色乒乓球，不用眼看伸手去摸球，摸出几个球才能保证至少有一个白色乒乓球?

// Input
// 输入包含多组测试数据，每组一行，包括2个不大于1000的正整数a,b (含义如上面描述).

// Output
// 每组输出一行，即至少摸出几个球才能保证其中必定有一个白色乒乓球。

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        cout << b + 1 << endl;
    }
    system("pause");
    return 0;
}