#include <bits/stdc++.h>
using namespace std;

struct correctDate
{ int day;
  int month;
  int year;
};

int main ()
  {
    struct correctDate c1;
    cout << "Enter date:";
    cin >> c1.day >> c1.month >> c1.year;
    if (c1.month == 1 || c1.month == 3 || c1.month == 5 || c1.month == 7 || c1.month == 8|| c1.month == 10 || c1.month == 12)
      {if ( c1.day <= 31){cout << "valid" << endl;}
      else {cout<<"inavlid" << endl;}}
    else if (c1.month == 4 || c1.month == 6 || c1.month == 9 || c1.month == 11){
        if (c1.day <= 30){cout << "valid" << endl;}
        else{cout << "invalid" << endl;} }
    else if (c1.month == 2){
        if (c1.day <= 28){cout << "valid" << endl;}
        else if (c1.day == 29){
            if(c1.year%400==0 ||(c1.year%4==0 && c1.year%100!=0)){cout<<"valid"<<endl;}
            else {cout<<"invalid"<<endl;}}
        else{cout<<"invalid"<<endl;}
	      }
	}
