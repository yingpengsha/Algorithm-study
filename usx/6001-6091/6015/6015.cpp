// Problem Description
// 输出形状为直角三角形的九九乘法表(每个元素占4个位置)

#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    cout << setw(4) << ' ';
    for (int i = 1; i <= 9; i++)
        cout << setw(4) << i;
    cout << endl;
    for (int i = 1; i <= 9; i++)
    {
        cout << setw(4) << i;
        for (int j = 1; j <= i; j++)
            cout << setw(4) << i * j;
        cout << endl;
    }
    system("pause");
    return 0;
}