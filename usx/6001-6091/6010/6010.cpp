// Problem Description
// 判断一个整数n能否被3和5整除。若能被3和5整除输出YES，否则输出NO

// Input
// 测试数据有多组，处理到文件尾。每组测试数据输入一个整数n。

// Output
// 每组按要求输出YES或NO。

#include <iostream>
using namespace std;
int main()
{
    int num;
    while (cin >> num)
    {
        if (num % 3 == 0 && num % 5 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}