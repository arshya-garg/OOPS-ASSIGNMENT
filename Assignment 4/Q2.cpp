#include <bits/stdc++.h>
using namespace std;

class bank{
    private:
    char name[30];
    char accountNo[30];
    char typeOfAcc[30];
    int balance;
    
    public:
     bank(char *Name ,char *Accountno, char *Typeofacc, int Balance){
        strcpy(name, Name);
        strcpy(accountNo,Accountno);
        strcpy(typeOfAcc,Typeofacc);
        balance=Balance;
     }
     void deposit(int deposit){
         balance +=deposit;
         cout<<endl<<"balance left:"<<balance<<endl;
     }
     void withdraw(int amount){
         if(amount<=balance){balance-=amount;
         cout<<endl;
         cout<<"withdraw successfull"<<endl;}
         else{cout<<"insufficient balance"<<endl;}
     }
     void printNameBalance(){
         cout<<endl;
         cout<<"Name:"<<name<<endl;
         cout<<"balance:"<<balance<<endl;
     }
     
     
    
}; 
int main()
{
    char Name[30], Accountno[30], Typeofacc[30];
    int Balance;
    cin>>Name>>Accountno>>Typeofacc>>Balance;
    bank b1(Name,Accountno,Typeofacc,Balance);
    b1.deposit(300);
    b1.withdraw(300);
    b1.printNameBalance();

    return 0;
}

