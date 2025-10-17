#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int year;
        
    public:
        void setDetail(string n, int yr){
            name = n;
            year = yr;
        }
        
        void getDetail(){
            cout << name << " " << year << endl;
        }
};

int main()
{
    Student s1;
    s1.setDetail("Kay", 2);

    Student s2;
    s2.setDetail("Doo", 3);
    
    s1.getDetail();
    s2.getDetail();
    
    return 0;
}