#include <iostream>
using namespace std;
//Write a C++ Program to create student class, read and print N student’s details. [Use Array of Objects]

class student{
    int rollno;
    char name[30];
    public:
    void setdata(){
        cin>>rollno>>name;
    }
    void getdata(){
        
        cout<<rollno<<". "<<name<<endl;
    }
};
int main()
{
    int n;
    cout<<"n:";
    cin>>n;
    student s[n];
    cout<<"Enter:"<<endl;
    for(int i=0;i<n;i++){s[i].setdata();}
    cout<<endl<<"Entered details:"<<endl;
    for(int i=0;i<n;i++){s[i].getdata();}
    return 0;
}

