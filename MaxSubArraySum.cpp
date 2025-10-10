#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {1,2,3}, sum, MaxSum;
    
    for(int i = 0; i < 3; i++)
    {
        sum = 0;
        for(int j = i; j < 3; j++)
        {
            sum += arr[j];
            if(sum > MaxSum)
                MaxSum = sum;
        }
    }
    cout << "Maximum sum of subarray = " << MaxSum;
}