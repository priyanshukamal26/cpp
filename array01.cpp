#include <iostream>
using namespace std;

int main()
{
    int nums[] = {1, 2, 5, 4, 5, 3, 6}, size, max = INT_MIN;
    size = sizeof(nums)/sizeof(nums[0]);

    for(int i=0; i < size - 1; i++)
    {
        if(nums[i] > max)
            max = nums[i];
    }

    int freq[max + 1] = {};

    for(int i=0; i < max + 1; i++)
    {
        
    }
    


}