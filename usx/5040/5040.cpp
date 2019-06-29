// Problem Description
// Your task is to calculate the sum of some integers.

// Input
// Input contains an integer N in the first line, and then N lines follow. Each line starts with a integer M, and then M integers follow in the same line.

// Output
// For each group of input integers you should output their sum in one line, and with one line of output for each line in input.

#include <iostream>
using namespace std;
int main()
{
    int M;
    cin >> M;
    while (M--)
    {
        int n, sum = 0, num;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            sum += num;
        }
        cout << sum << endl;
    }
    system("pause");
    return 0;
}