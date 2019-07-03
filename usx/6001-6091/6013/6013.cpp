// Problem Description
// 判断所输入年份是否为闰年。

// Input
// 测试数据有多组，处理到文件尾。每组测试数据输入年份n。

// Output
// 对于每组输入年份n，若n为闰年，输出is LEAP!，否则输出is NOT LEAP!。

#include <iostream>
using namespace std;
int main()
{
    int year;
    while (cin >> year)
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            cout << "is LEAP!" << endl;
        else
            cout << "is NOT LEAP!" << endl;
    }
    system("pause");
    return 0;
}