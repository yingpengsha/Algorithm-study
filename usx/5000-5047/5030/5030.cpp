// Problem Description
// 输入n个数(n<=10)，对其中的素数进行排序（剔除非素数），输出排序后的数列结果。
// 建议：编写若干函数，用以判断素数，以及对数组进行排序。

// Input
// 第一行是一个正整数t,表示测试的总数。
// 然后是t行测试数据,每行由整数n开头，后面跟随n个整数。

// Output
// 对于每组测试，输出从小到大排序后的结果(数字之间保留1空格，尾端无多余空格)。

#include <cmath>
#include <iostream>
using namespace std;
bool isPrimeNum(int);
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int count, i, j;
        cin >> count;
        int num[count], number, actualCount = 0;
        for (i = 0; i < count; i++)
        {
            cin >> number;
            if (isPrimeNum(number))
            {
                num[actualCount] = number;
                actualCount++;
            }
        }
        int temp, key;
        for (i = 0; i < actualCount - 1; i++)
        {
            key = i;
            for (j = i + 1; j < actualCount; j++)
            {
                if (num[key] > num[j])
                    key = j;
            }
            if (key != i)
            {
                temp = num[key];
                num[key] = num[i];
                num[i] = temp;
            }
        }
        for (i = 0; i < actualCount - 1; i++)
            cout << num[i] << ' ';
        cout << num[actualCount - 1] << endl;
    }
    system("pause");
    return 0;
}

bool isPrimeNum(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}