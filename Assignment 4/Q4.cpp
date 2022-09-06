#include <bits/stdc++.h>
using namespace std;

class Rectangle{
    float length;
    float width;
    public:
    void setlength(float length){this->length =length;}
    void setwidth(float width){this->width=width;}
    float perimeter(){
        float perimeter;
        perimeter= 2*(length+width);
        return perimeter;
    }
    float area(){
        float area;
        area=length*width;
        return area;
    }
    void show(){
        cout<<this->length<<" "<<this->width<<endl; }
    int sameArea(Rectangle other){
        float r1area=length*width;
        float r2area=other.length*other.width;
        if(r1area==r2area){return 1;}
        else{return 0;}
    }
    
};


int main(){
    Rectangle r1,r2;
    r1.setlength(5);
    r1.setwidth(2.5);
    r2.setlength(5);
    r2.setwidth(18.9);
  // float r1area=r1.area();
    cout<<"area of r1:"<<r1.area()<<endl;
    cout<<"perimeter of r1:"<<r1.perimeter()<<endl;
    //float r2area=r2.area();
    cout<<"area of r2:"<<r2.area()<<endl;
    cout<<"perimeter of r2:"<<r2.perimeter()<<endl;
    cout<<"sameArea:"<<r1.sameArea(r2)<<endl;
    r1.setlength(15);
    r1.setwidth(6.3);
    r1.show();
    cout<<endl;
   // float r1area=r1.area();
   // float r2area=r2.area();
    cout<<"sameArea:"<<r1.sameArea(r2)<<endl;

    return 0;
}

