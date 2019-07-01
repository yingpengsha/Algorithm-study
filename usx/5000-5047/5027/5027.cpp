// Problem Description
// 根据输入的姓名，输出欢迎信息。

// Input
// 输入姓名name（长度不超过20且不包含空格的字符串）。本题只有一组测试!

// Output
// 输出相应的欢迎信息。也就是在姓名之前添加"hello "。具体请参看sample。

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cin >> name;
    cout << "hello " << name << endl;
    system("pause");
    return 0;
}
