// http://acm.usx.edu.cn/AspNet/Question.aspx?qid=5008
// Problem Description
// 大小写英文字母转换。

// Input
// 输入若干个英文字母，输入到文件尾结束。

// Output
// 若输入的英文字母是大写则转换为小写，否则转换为大写。

#include <iostream>
using namespace std;
int main()
{
    char c;
    while (cin >> c)
    {
        if (c >= 'A' && c <= 'Z')
        {
            cout.put(c + 32);
        }
        else if (c >= 'a' && c <= 'z')
        {
            cout.put(c - 32);
        }
        else
        {
            cout.put(c);
        }
        cout << endl;
    }
    system("pause");
    return 0;
}