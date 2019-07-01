// Problem Description
// 输入n个数据。利用冒泡排序进行编程（先排最大值），输出第k轮排序后的数列状况。

// Input
// 每组测试包含两行，分别是整数n,k (0<=k<n<100)，以及n个原始数据。

// Output
// 输出第k轮排序后的数列结果(数据之间1个空格，尾端无多余空格)。

#include <iostream>
using namespace std;
int main()
{
    int count, k;
    while (cin >> count >> k)
    {
        int num[count], i, j, temp;
        for (i = 0; i < count; i++)
            cin >> num[i];
        for (i = 0; i < k; i++)
        {
            for (j = 0; j < count - 1 - i; j++)
            {
                if (num[j] > num[j + 1])
                {
                    temp = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = temp;
                }
            }
        }
        for (i = 0; i < count - 1; i++)
            cout << num[i] << ' ';
        cout << num[count - 1] << endl;
    }
    system("pause");
    return 0;
}