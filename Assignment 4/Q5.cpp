#include <bits/stdc++.h>
using namespace std;

class Distance{
    int feet;
    float inches;
    
    public:
    void set(int feet,float inches){
        this->feet=feet;
        this->inches=inches;
    }
    void disp(){
        cout<<this->feet<<"ft "<<this->inches<<"inches"<<endl;   }
    Distance add(Distance other){
        Distance result;
        result.feet=feet+other.feet;
        result.inches=inches+other.inches;
        return result;
        
    }
    
};

int main(){
    Distance d1,d2,result;
    d1.set(2,4.5);
    d2.set(3,5.5);
    d1.disp();
    d2.disp();
    result=d1.add(d2);
    result.disp();
}
