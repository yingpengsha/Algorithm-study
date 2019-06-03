// http://acm.usx.edu.cn/AspNet/Question.aspx?qid=5021
// Problem Description
// “中国剩余定理”又叫“鬼谷算”，又名“隔墙算”；杨辉叫它“剪管术”而比较通行的名称是“韩信点兵”。
// 最初记述这类算法的是一本名叫《孙子算经》的书，后来在宋朝经过数学家秦九韶的推广，又发现了一种算法，叫做“大衍求一术”。

// 今有物不知其数，三三数之剩二，五五数之剩三，七七数之剩二，问物几何？——《孙子算经》
// 话说韩信点兵之时将兵三三数之，五五数之，七七数之。
// 有歌谣流传：
// 三人同行七十稀，
// 五树梅花廿一枝，
// 七子团圆正半月，
// 除百零五便得知。

// 以此算法，便可算出人数

// Input
// 输入三个数，分别是三三之余，五五之余，七七之余

// Output
// 输出总人数(总人数小于105人大于0人)

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    while (cin >> a >> b >> c)
    {
        int num = 0;
        for (int i = 1; i <= 105; i++)
        {
            if (i % 3 == a && i % 5 == b && i % 7 == c)
            {
                num = i;
                break;
            }
        }
        cout << num << endl;
    }
    system("pause");
    return 0;
}