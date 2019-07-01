// Problem Description 
// Your task is to Calculate the sum of some integers.

// Input
// Input contains multiple test cases. Each test case contains a integer N, and then N integers follow in the same line. A test case starting with 0 terminates the input and this test case is not to be processed.

// Output
// For each group of input integers you should output their sum in one line, and with one line of output for each line in input.

#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        if(!n)
            break;

        int sum = 0,num;
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