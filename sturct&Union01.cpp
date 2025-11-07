#include <iostream>
using namespace std;

struct Student{
    string name;
    int age;
    int standard;
};

union Employee{
    int age;
    int salary;
};

int main()
{
    Student s1;
    Employee e1;

    s1.name = "Aakash";
    s1.age = 10;
    s1.standard = 4;
    
    e1.age = 30;
    e1.salary = 20000;
    
    cout << s1.name << endl;

    return 0;
}