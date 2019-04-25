// http://acm.usx.edu.cn/AspNet/Question.aspx?qid=5013
// Problem Description
// 根据读入的n值，输出以@为填充字符，宽为20，高为n的字符矩形。

// Input
// 输入数据只有一个正整数n（1≤n≤50）。
// 本题只有一组测试!

// Output
// 输出以@为填充字符，宽为20，高为n的字符矩形。

#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "@@@@@@@@@@@@@@@@@@@@" << endl;
    }
    system("pause");
    return 0;
}