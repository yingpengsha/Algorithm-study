// Problem Description
// 输入两个只包含字母和数字的串s,t,若它们能分别转换为整数则输出其和,否则输出sorry.

// Input
// 输入数据首先包含一个整数T，表示测试实例的个数，然后是T行测试数据。每行包括两个串s,t，中间用一个空格分开。

// Output
// 输出两个串分别转换为整数后的和(结果不会超出4294967295（2^32-1）)或sorry。

#include <iostream>
#include <string>
using namespace std;
bool isNum(string);
void strAdd(string, string);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        if (isNum(str1) && isNum(str2))
        {
            strAdd(str1, str2);
        }
        else
        {
            cout << "sorry" << endl;
        }
    }
    system("pause");
    return 0;
}

void strAdd(string a, string b)
{
    int numTemp = 0, i;
    string strTemp;
    if (!a.compare(b))
    {
        strTemp = a;
        a = b;
        b = strTemp;
    }
    int *num1 = new int[a.length()]{0};
    int *num2 = new int[a.length()]{0};
    int *result = new int[a.length()]{0};
    for (i = 0; i < a.length(); i++)
    {
        num1[i] = a[i] - '0';
    }
    for (i = 0; i < b.length(); i++)
    {
        num2[i + a.length() - b.length()] = b[i] - '0';
    }
    for (i = a.length() - 1; i >= 0; i--)
    {
        result[i] = (num1[i] + num2[i] + numTemp) % 10;
        numTemp = (num1[i] + num2[i] + numTemp) / 10;
    }
    if (numTemp)
        cout << numTemp;

    for (i = 0; i < a.length(); i++)
    {
        cout << result[i];
    }
    cout << endl;
}

bool isNum(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
            return false;
    }
    return true;
}
