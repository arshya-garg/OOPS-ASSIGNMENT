#include <iostream>
using namespace std;

class student{
    public:
    int rollno;
    string name;
    
};

int main()
{
    student s1,s2;
    //s1(1,"arshya");
    //s2(2,"atharv");
    s1.rollno=1;s1.name="Arshya";
    s2.rollno=2;s2.name="Atharv";
    cout<<s1.rollno<<". "<<s1.name<<endl;
    cout<<s2.rollno<<". "<<s2.name<<endl;
    

    return 0;
}
