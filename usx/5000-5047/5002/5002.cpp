// http://acm.usx.edu.cn/AspNet/Question.aspx?qid=5002
// Problem Description
// 输入n(其中1<n<100)和n个各不相等的整数（int型数据范围）,求最大和次大元素的序号(从1开始编号).n为0时测试结束.

#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    while (true)
    {
        int count;
        cin >> count;
        if (count == 0)
        {
            break;
        }

        int num, first, firstIndex, second, secondIndex;
        for (int i = 1; i <= count; i++)
        {
            cin >> num;
            if (i == 1)
            {
                first = num;
                firstIndex = 1;
            }
            else if (i == 2)
            {
                second = num;
                secondIndex = 2;
                if (second > first)
                {
                    swap(first, second);
                    swap(firstIndex, secondIndex);
                }
            }
            else
            {
                if (num > first)
                {
                    second = first;
                    first = num;
                    secondIndex = firstIndex;
                    firstIndex = i;
                }
                else if (num > second)
                {
                    second = num;
                    secondIndex = i;
                }
            }
        }
        cout << firstIndex << " "
             << secondIndex << endl;
    }
    system("pause");
    return 0;
}