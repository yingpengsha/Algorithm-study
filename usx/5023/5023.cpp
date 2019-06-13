// Problem Description
// 有一个字符串，其元素已经按照从小到大顺序排列好，现在另外给一个字符c，请将该字符插入到串中，并使新串仍然有序。

// Input
// 输入数据首先包含一个整数T，表示测试实例的个数，然后是T组测试数据。每组数据，分别是串s和字符c。

// Output
// 对于每个测试实例，输出插入新的元素后的字符串。

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string str;
        char c;
        bool flag = true;
        cin >> str >> c;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] > c && flag)
            {
                cout << c;
                flag = false;
            }
            cout << str[i];
        }
        if (flag)
        {
            cout << c;
        }
        cout << endl;
    }
    system("pause");
    return 0;
}