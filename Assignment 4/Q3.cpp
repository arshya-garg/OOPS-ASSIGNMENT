#include <bits/stdc++.h>
using namespace std;

class Complex{
    private:
    float real;
    float img;
    
    public:
    void set(float real,float img){
        this->real=real;
        this->img=img;
    }
    void disp(){
        cout<<this->real<<"+"<<this->img<<"i"<<endl;
    }
    Complex sum(Complex c1,Complex c2){
        Complex result;
        result.real=c1.real+c2.real;
        result.img=c1.img+c2.img;
        return result;
        
    }
};

int main()
{
    Complex c1,c2,result;
    c1.set(4.5,5.5);
    c2.set(5,3.5);
    c1.disp();
    c2.disp();
    result=result.sum(c1,c2);
    result.disp();
    return 0;
}

