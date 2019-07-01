// Problem Description
// 输入n个整数(1<=n<100),并在指定位置p处插入新元素,输出最后的结果.
// 每个测试包含2行输入.第1行n,p,q,其中p,q分别表示需要插入的位置和需要插入的元素值(1<=p<=n+1, 且q符合int型数据范围). 第2行表示n个整数. n,p,q均为0时,表示测试结束.

#include <iostream>
using namespace std;
int main()
{
    int count, location, num;
    while (cin >> count >> location >> num)
    {
        if (count == 0 && location == 0 && num == 0)
            break;
        int numArr[count + 1];
        for (int i = 0; i < count + 1; i++)
        {
            if (i == location - 1)
                numArr[i] = num;
            else
                cin >> numArr[i];
        }
        for (int i = 0; i < count; i++)
        {
            cout << numArr[i] << ' ';
        }
        cout << numArr[count] << endl;
    }
    system("pause");
    return 0;
}