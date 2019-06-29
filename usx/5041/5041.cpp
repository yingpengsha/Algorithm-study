// Problem Description
// Your task is to calculate the sum of some integers.

// Input
// Input contains multiple test cases, and one case one line. Each case starts with an integer N, and then N integers follow in the same line.

// Output
// For each test case you should output the sum of N integers in one line, and with one line of output for each line in input.

#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int sum = 0, num;
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