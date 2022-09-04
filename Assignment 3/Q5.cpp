#include <bits/stdc++.h>
using namespace std;

struct cricketer{
    char name[100];
    int age;
    int noOfTestMatches;
    int avgRuns;
    
};
bool compare(cricketer a,cricketer b)
{if(a.avgRuns < b.avgRuns) {return 1;}
else{return 0;}
}

int main()
{
    struct cricketer c[20];
    int i;
    for(i=0;i<20;i++){
        cout<<"for "<<i+1<<"st player:";
        cin>>c[i].name>>c[i].age>>c[i].noOfTestMatches>>c[i].avgRuns;
}
  int n = sizeof(c) / sizeof(c[0]);
  sort(c, c + n,compare);
  
  cout<<"Ascending order:"<<endl;
  for (int i = 0; i < 20; ++i)
        {cout <<c[i].name<<" "<<c[i].age<<" "<<c[i].noOfTestMatches<<" "<<c[i].avgRuns<<endl;}
    return 0;
}



