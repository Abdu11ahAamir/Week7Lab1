#include <iostream>
using namespace std;
int frequencyChecker(int number, int digit);
main()
{
    int n;
    int d;
    int j;
    cout << frequencyChecker(n, d);
    cin >> j;
}

int frequencyChecker(int number, int digit)
{
    int count = 0;
    cout << "Enter the number: ";
    cin >> number;
    cout << "Enter the digit: ";
    cin >> digit;

    for (int i = 1; i <= number; i = i * 10)
    {
        int p = number % (i * 10) / i;
        if (p == digit)
        {
            count = count + 1;
        }
    }
    return count;
}