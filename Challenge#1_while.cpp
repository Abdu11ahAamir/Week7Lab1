#include<iostream>
using namespace std;

int hcf(int a, int b);
main()
{
    int num1, num2;

    hcf(num1, num2);
}

int hcf(int a, int b)
{
    cout << "Enter the number: ";
    cin >> a; 
    int count = 0;

    for(int i = 0; i == a; i++)
    {
        if(a % i == 0)
        {
            count = count + 1;
        }
    }    
    return count;
}