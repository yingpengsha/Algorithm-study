// Problem Description
// Your task is to Calculate a + b.

// Input
// The input will consist of a series of pairs of integers a and b, separated by a space, one pair of integers per line.

// Output
// For each pair of input integers a and b you should output the sum of a and b, and followed by a blank line.

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        cout << a + b << endl
             << endl;
    }
    system("pause");
    return 0;
}