// Problem Description 
// 输入由小写字母组成的字符串，找出其中最小的字符，将它与串首字符交换后输出。

// Input
// 输入数据首先包含一个整数T，表示测试实例的个数，然后是T组测试数据。每组占一行。

// Output
// 对于每组输入数据，输出交换后的字符串，每组输出占一行。

#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T;i++)
    {
        string str;
        cin >> str;
        char temp;
        int index = 0;
        for (int j = 1; j < str.length(); j++)
        {
            if (str[j] < str[index])
            {
                index = j;
            }
        }
        if (index != 0)
        {
            temp = str[index];
            str[index] = str[0];
            str[0] = temp;
        }
        cout << str << endl;
    }
    system("pause");
    return 0;
}