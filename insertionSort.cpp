#include <iostream>
using namespace std;

int main()
{
    
    int arr[] = {4, 2, 6, 7, 4, 9, 4}, temp;
    
    int len = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0; i < len; i++)
    {
        for(int j = i - 1; j != 0 && j < len; j++)
        {
            while(arr[j - 1] > arr[j])
            {
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    cout << endl << "{";
    
    for(int i = 0; i < len; i++)
    {   
        if(i == len - 1)
            cout << arr[i];
        else
            cout << arr[i] << ", ";
    }
        
    cout << "}";
    
    return 0;
}









// class Solution {
//   public:
//     void insertionSort(vector<int>& arr) {
//         // code here
//         int len = arr.size();
    
//         for(int i = 1; i < len; i++)
//         {
//             int j = i;
//             while(j > 0 && arr[j - 1] > arr[j])
//             {
//                 int temp = arr[j - 1];
//                 arr[j - 1] = arr[j];
//                 arr[j] = temp;
//                 j--;
//             }
//         }
//     }
// };