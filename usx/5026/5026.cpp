// Problem Description
// 百分制成绩转换为五级计分制时，90分以上为A，80～89分为B，70～79分为C，60～69分为D，0～59分为E。（建议使用switch语句完成）

// Input
// 测试有多组，每组输入1个整数score。处理到输入结束。

// Output
// 逐行输出百分制成绩score对应的字符等级。若score非法，输出"error!"

#include <iostream>
using namespace std;
int main()
{
    int score;
    while (cin >> score)
    {
        if (score >= 0 && score <= 100)
        {
            if (score < 60)
                cout << 'E' << endl;
            else if (score < 70)
                cout << 'D' << endl;
            else if (score < 80)
                cout << 'C' << endl;
            else if (score < 90)
                cout << 'B' << endl;
            else
                cout << 'A' << endl;
        }
        else
        {
            cout << "error!" << endl;
        }
    }
    system("pause");
    return 0;
}