#include <bits/stdc++.h> 
using namespace std; 

void swapByValue(int a,int b){
  int temp;
  temp=a;
  a=b;
  b=temp;
  cout<<"Swapping by Value:"; cout<<a<<" "<<b<<endl;
  }
void swapByReference (int &x, int &y ){
  int temp; 
  temp=x;
  x=y;
  y=temp;
  cout<<"Swapping by Reference:";
  cout<<x<<" "<<y<<endl;
}

int main(){
  int a,b;
  cin>>a>>b;
  cout<<"Before Swapping: "; cout<<a<<" "<<b<<endl;
  swapByValue(a,b);
  swapByReference(a,b);
}

