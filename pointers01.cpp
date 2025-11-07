#include <iostream>
using namespace std;

int* DemoDangling(){
    int a = 10;
    int *p = 89;
    return *p;
}

int main()
{
    // // BASIC POINTER
    // int a = 5.93;
    // int b = 10;
    // int *p = &a, *q = &b;
    // cout << *p << " " << *q;;
    
    // // VOID POINTER + PRINTING
    // int a = 25;
    // void* v = &a;
    // cout << *((int*)v);
    // // OR
    // cout << *(static_cast<int*>(v)); //safer
    
    
    // // SUM OF ARRAY - using POINTER ARITHMETIC
    // int arr[] = {10, 20, 30, 40, 50};
    // // int *p = arr;
    // // cout << p << endl;
    // // cout << *p << endl;
    // // cout << *p + *(p + 1) + *(p + 2) + *(p + 3) + *(p + 4);
    
    // // Sum of Array - using POINTER ARITHMETIC - LOOP
    // int sum = 0;
    // for(int i = 0; i < 5; i++)
    // {
    //     sum += *(p + i);
    // }
    // cout << sum;
    
    // // DOUBLE POINTER
    // int x = 10;
    // int *y = &x;
    // int **dp = &y;
    // cout << **dp << endl;

    // // SHOULD GIVE ERROR - COMPILER DEPENDENT    
    // int* p;
    // *p = 10;
    // cout << p << endl;
    
    DemoDangling();
    
    return 0;
}