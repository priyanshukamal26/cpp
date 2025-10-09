#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,10,9,15,12};
    int min=INT_MAX, max=arr[0], SMax=arr[0], TMax=arr[0];

    for(int i=0; i<8; i++)
    {
        if(arr[i]<min)
            min=arr[0];
        
        if(arr[i]>max)
        {
            SMax=max;
            max=arr[i];
        }

        if(arr[i]<max && arr[i]>SMax)
        {
            TMax=SMax;
            SMax=arr[i];
        }

    }

    cout << "Minimum : " << min << endl;
    cout << "Maximum : " << max << endl;
    cout << "Second Maximum : " << SMax << endl;
    cout << "Third Maximum : " << TMax << endl;
}