**WAP using function using pointers to compute the sum of all elements stored in an array. Also display the base address and address of each element of an array.**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,sum=0;
    
    cin>>n;
    int *a;
    int arr[n];
    for(i=0;i<n;i++){cin>>arr[i];}
    a=arr;
    
    for(i=0;i<n;i++){
        cout<<"for index:"<<i<<" address is:"<<*(a+i)<<endl;
        sum=sum+ *(a+i) ;}
        cout<<"sum:"<<sum<<endl;
    
    return 0;
}
