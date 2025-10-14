#include <iostream>
using namespace std;

int main()
{
	int arr[6]= {10, 20, 30, 40, 50, 60};

	int x, element, temp = 0;

	cout << "Enter index : ";
	cin >> x;
	
	if(x < sizeof(arr) && x>=0)
	{
	    cout << "Enter element : ";
	    cin >> element;
	
		for(int i=(sizeof(arr)/sizeof(arr[0]))-1; i>0 ; i--)
		{
			if(i==x)
			{
				arr[i] = element;
				break;
			}
			else
				arr[i] = arr[i-1];
		}
		
	   	cout << "Updated array - ";
    	for(int i=0; i<(sizeof(arr)/sizeof(arr[0])-1); i++)
		    cout << arr[i] << " ";
	}
	
	else
		cout << "Error. Enter valid index.";

	return 0;
}


// #include <iostream>
// using namespace std;
// int main()
// {
//     int n=5, insertAtFirstEndValue, arr[n]={10, 20, 30, 40, 50};
//     printf("Enter first element : ");
//     for(int i=n-1; i>=0; i--)
//     {
//         if(i != 0)
//             arr[i] = arr[i-1];
//     }
//     arr[0] = insertAtFirstEndValue;

//     return 0;
// }