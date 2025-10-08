#include <bits/stdc++.h>
// #include <iostream>

using namespace std;

// int main()
// {
//     cout<<"Hello World";

//     return 0;
// }

namespace DemoNS{
    // void Greet(){
    //     std::cout << "Hey There!";
    // }
    
    void NumSwap(int a, int b){
        int c;
        c=a;
        a=b;
        b=c;
        // a=a+b;
        // b=a-b;
        // a=a-b;
        cout << "Swapped Numbers: " << a << " " << b;
    }
}

// using namespace DemoNS;

int main(){
    // cout << "Hello from std.";
    // Greet();
    int a,b;
    cin >> a >> b;
    DemoNS::NumSwap(a,b);
    
}



#include <iostream>
using namespace std;
int main()
{
    int a=1, b=10;
    
    for(; a<b; a++)
    {
        b--;
    }

    cout << a << " " <<b;
    
    return 0;
}