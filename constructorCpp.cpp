#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        int year;

    Student(string n, int yr){
        name = n;
        year = yr;
    }
        
        void getDetail(){
            cout << name << " " << year << endl;
        }
};

int main()
{
    Student s1("Kay", 2);
    Student s2("Doo", 3);

    s1.getDetail();
    s2.getDetail();
    
    return 0;
}