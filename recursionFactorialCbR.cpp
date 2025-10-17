#include <iostream>
using namespace std;

int factorialFunction(int *n)
{
    if(*n == 0 || *n == 1)
        return 1;
    else
    {
        int temp = *n - 1;
        return *n * factorialFunction(&temp);
    }
}

int main()
{
    int num;
    
    cout << "Enter a number - ";
    cin >> num;
    
    cout << "Factorial = " << factorialFunction(&num);
    
    return 0;
}