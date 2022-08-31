#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[2][3]={{1,2,3},{4,5,6}};
    int arrT[3][2],i,j;
    
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){cout<<arr[i][j];}cout<<endl;
    }
    
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){arrT[j][i]=arr[i][j];}
    }
    
    cout<<"Transpose:"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){cout<<arrT[i][j];}cout<<endl;
    }
}












#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,c,i,j;
    cin>>r>>c;
    int arr[r][c],arrT[c][r];
    
    for(i=0;i<r;i++){
        for(j=0;i<c;j++){cin>>arr[i][j];}
    }
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){cout<<arr[i][j];}
    }
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){arrT[j][i]=arr[i][j];}
    }
    
    cout<<"Transpose:"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){cout<<arrT[i][j];}
    }
  


    return 0;
}
