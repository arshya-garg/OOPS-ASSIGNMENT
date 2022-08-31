#include <bits/stdc++.h>
using namespace std;

int main()
{
    int days;
    cin>>days;
    
    if(days>0 && days<=5){cout<<"fine:"<<float(days*0.5)<<endl;}
    else if(days>=6 && days<=10){cout<<"fine:"<<days<<endl;}
    else if(days>10 && days<30){cout<<"fine:"<<days*5<<endl;}
    else if(days>30){cout<<"Membership cancelled"<<endl;}

    return 0;
}
