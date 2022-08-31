#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,count=0,j;
    for(i=1;i<=300;i++){
        count=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0){count=1;break;}
        }
        if(count==0 & i!=1){cout<<i<<" ";}
    }
    return 0;
}
