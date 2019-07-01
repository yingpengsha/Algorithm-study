// Problem Description 
// 输入n个数据。按从大到小排序，输出结果。

// Input
// 每组测试包含两行，分别是整数n (0<n<100)，以及n个原始数据。

// Output
// 输出排序后结果(数据之间1个空格，尾端无多余空格)。

#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int *num = new int[n];
        int i, j, temp;
        for (i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - 1 - i; j++)
            {
                if (num[j] < num[j + 1])
                {
                    temp = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = temp;
                }
            }
        }
        for (i = 0; i < n - 1; i++)
        {
            cout << num[i] << " ";
        }
        cout << num[n - 1] << endl;
    }
    system("pause");
    return 0;
}