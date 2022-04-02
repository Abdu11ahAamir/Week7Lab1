#include<iostream>
using namespace std;
void print_table(int number)
{
    cout<< "Enter the number: ";
    cin >> number;
    int sum;
    for(int i = 1; i <=10; i = i + 1)
    {
        cout<< number << " * " << i << " = " << number * i << endl;
    }
  
}
main()
{
  int N;
  print_table(N);
  print_table(N);
  print_table(N);   
}