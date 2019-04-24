// http://acm.usx.edu.cn/AspNet/Question.aspx?qid=5007
// Problem Description 
// 求圆面积。圆周率定义为3.14159。

// Input
// 输入若干个半径r，输入到文件尾结束。

// Output
// 逐行输出每个半径对应的圆面积，结果保留3位小数。

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const float PI = 3.14159;
    float r;
    while(cin>>r)
    {
        cout << fixed << setprecision(3) << PI * r * r << endl;
    }
    system("pause");
    return 0;
}