#include<bits/stdc++.h>
using namespace std;
class Bank{ 
  private:
  string name;
  string accounttype;
  int acc;
  double balance;
  public:
  void initial(){
    cin>>name>>acc>>accounttype>>balance;
  }
  void deposit(){ 
    float deposit;
   cin>>deposit;
   balance+=deposit;
  }
  void withdraw() {
    float withdraw;
    cin>>withdraw;
    if(withdraw>balance){ 
      cout<<"Insufficient amount\n";
    }
    else balance-=withdraw; 
  }
  void disp() { 
    cout<<"NAME="<<name<<"\nACCNO="<<acc<<"\nTYPE="<<accounttype<<"\nBALANCEAMOUNT="<<balance<<endl; 
  }
};

int main(){
  float deposit,withdraw;
  Bank obj;
  obj.initial();
  obj.deposit();
  obj.withdraw();
  obj.disp();
  return 0;
}