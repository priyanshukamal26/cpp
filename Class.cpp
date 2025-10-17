#include <iostream>
using namespace std;

// PUBLIC
class Student{
    public:
        string name;
        int year;
};

void getDetail(Student s){
    cout << s.name << " " << s.year << endl;
}

int main()
{
    Student s1;
    s1.name = "Kay";
    s1.year = 2;
    
    Student s2;
    s2.name = "Doo";
    s2.year = 3;
    
    getDetail(s1);
    getDetail(s2);
    
    return 0;
}