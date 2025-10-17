#include <iostream>
using namespace std;

void numFunc(int n)
{
    int sum = 0;
    cout << "Square of nuumber = " << n*n << endl;
    
    for(int i = 1; i <= n; i++)
        sum += i;
        
    cout << "Sum till number (included) = " << sum << endl;
    cout << "Cube of number  = " << n*n*n;
}

int main()
{
    int num;
    
    cout << "Enter a number - ";
    cin >> num;
    
    numFunc(num);
    
    return 0;
}