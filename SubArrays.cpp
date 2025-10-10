#include <iostream>
using namespace std;

int main()
{
    int arr[3]={1,2,3};

    // TRY 01
    // for(int i=0; i<3; i++)
    // {
    //     for(int j=0; j<i+1; j++)
    //     {
    //         for(int k=j; k<i+1; k++)
    //             cout << arr[k] << " ";
    //         cout << endl;
    //     }
    // }

    // TRY 02
    // for(int i=0; i<3; i++)
    // {
    //     for(int j=0; j<i+1; j++)
    //     {
    //         for(int k=j; k<i+1; k++)
    //             cout << arr[k] << " ";
    //         cout << endl;
    //     }
    // }


    // FINAL TRY
    for(int i=0; i<3; i++)
    {
        for(int j=i; j<3; j++)
        {
            for(int k=i; k<=j; k++)
                cout << arr[k] << " ";
            cout << endl;
        }
        // cout << endl;
    }
}



