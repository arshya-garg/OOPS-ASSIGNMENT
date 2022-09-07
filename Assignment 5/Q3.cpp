#include <iostream>
using namespace std;

class manager{
    int employeeid;
    char name[30];
    int age;
    public:
    void setdata(){
        cin>>employeeid>>name>>age;
    }
    void getdata(){
        
        cout<<employeeid<<" "<<name<<" "<<age<<endl;
    }
};
int main()
{
    int n;
    cout<<"n:";
    cin>>n;
    manager m[n];
    cout<<"Enter:"<<endl;
    for(int i=0;i<n;i++){m[i].setdata();}
    cout<<endl<<"Entered details:"<<endl;
    for(int i=0;i<n;i++){m[i].getdata();}
    return 0;
}
