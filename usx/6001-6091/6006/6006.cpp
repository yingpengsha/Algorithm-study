// Problem Description
// 编写一个求0～100之间全部偶数之和的程序。

// Output
// 输出0～100之间全部偶数之和。

#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    for (int i = 0; i < 100; i += 2, sum += i)
        ;
    cout << sum << endl;
    system("pause");
    return 0;
}