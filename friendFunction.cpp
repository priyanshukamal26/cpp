#include <iostream>
using namespace std;

class B;
class A{
    private:
        int a;
    public:
        void get(){
            cin >> a;
        }
        friend void compare(A, B);
};

class B{
    private:
        int b;
    public:
        void get(){
            cin >> b;
        }
        friend void compare(A, B);
};

void compare(A x, B y){
    if(x.a > y.b){
        cout << x.a << " is greater.";
    }else if(x.a < y.b){
        cout << y.b << " is greater.";
    } else{
        cout << "Both are equal";
    }
}

int main()
{
    A var1;
    B var2;
    
    var1.get();
    var2.get();
    
    compare(var1, var2);
    
    return 0;
}