// Problem Description
// 输入n个整数(2<=n<100),交换指定的两个元素后,输出结果.
// 输入数据首先包含一个整数T，表示测试实例的个数，然后是T组测试数据。
// 每组测试数据包含2行输入.第一行n,p,q,其中p,q分别表示需要交换的两个元素的序号. 第2行表示输入的n个整数.

#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int count, a, b, temp;
        cin >> count >> a >> b;
        int num[count];
        for (int i = 0; i < count; i++)
        {
            cin >> num[i];
        }
        temp = num[a - 1];
        num[a - 1] = num[b - 1];
        num[b - 1] = temp;
        for (int i = 0; i < count - 1; i++)
        {
            cout << num[i] << ' ';
        }
        cout << num[count - 1] << endl;
    }
    system("pause");
    return 0;
}