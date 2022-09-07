#include <bits/stdc++.h>
using namespace std;


class student{
    char name[20];
    int roll_no;
    int marks[6];
    public:
    void getdata(){
        cout<<"Enter name and roll_no"<<endl;
        cin>>name>>roll_no;
        cout<<"Enter marks of 6 subjects:"<<endl;
        for(int i=0;i<6;i++){cin>>marks[i];}
        }
    void tot_marks(){
        int sum=0;
        for(int i=0;i<6;i++){sum+=marks[i];}
        cout<<"Total marks:"<<sum<<endl;
    }
};
int main()
{
    student s1;
    s1.getdata();
    s1.tot_marks();
    return 0;
}

