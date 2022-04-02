#include<iostream>
using namespace std;
void fabonacci(int leng)
{
    int num1 = 0, num2 = 1, next;
    cout<<num1 << ", " << num2;
    for(int x = 1; x < leng; x = x + 1)
    {
        next = num1 + num2;
        cout << ", " << next;
        num1 = num2;
        num2 = next;
    }

}
main()
{
    int n;
    cout << "How many numbers of fabonacci series you want to print: ";
    cin >> n;
    fabonacci(n);
}