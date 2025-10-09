#include <iostream>
using namespace std;
int main()
{
    int a=10, b=20, c=30;
    int max = a, min = INT_MAX, secondmax = a;
    if(b>max)
    {
        secondmax = max;
        max = b;
    }
    else if(b>secondmax)
    {
        secondmax = b;
    }

    if(c>max)
    {
        secondmax = max;
        max = c;
    }
    else if(c>secondmax)
    {
        secondmax = c;
    }

    cout << "Maximum: " << max << endl;
    cout << "Second Maximum: " << secondmax << endl;

    if(a<min)
        min=a;
    else if(b<min)
        min = b;
    else
        min = c;

    cout << "Minimum: " << min << endl;

    return 0;
}