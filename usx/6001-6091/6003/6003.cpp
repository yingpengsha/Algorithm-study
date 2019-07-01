// Problem Description
// 编写一个程序，调用库函数，求以下函数值。
// (1)cos 3.5678(角度单位为弧度)
// (2)log 90
// (3)e^2.567(e^2.567表示e的2.567次幂)

// Output
// 分行输出三个函数值(保留4位小数)。

// Hint
// 上面的三个函数分别是cos、log10、exp。

#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    cout << fixed << setprecision(4) << cos(3.5678) << endl;
    cout << fixed << setprecision(4) << log10(90) << endl;
    cout << fixed << setprecision(4) << exp(2.567) << endl;
    system("pause");
    return 0;
}