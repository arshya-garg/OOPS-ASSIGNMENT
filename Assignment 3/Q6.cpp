#include <bits/stdc++.h>
using namespace std;
struct complexNo{
        int real;
        int img;
    };
    
    
int main()
{ struct complexNo c1,c2;
cin>>c1.real>>c1.img;
cin>>c2.real>>c2.img;
cout<<"Addition:"<<c1.real+c2.real<<"+"<<c1.img+c2.img<<"i"<<endl;
cout<<"Subtraction:"<<c1.real-c2.real<<"+"<<c1.img-c2.img<<"i"<<endl;
return 0;
}
