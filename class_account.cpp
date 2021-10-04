#include<iostream>
#include<cstring>
using namespace std;
class BankAccount
{

  string name;
  double accNo;
  string accType;
  double balance;
  public:
  void setAccount(string nam, double x, string acc, double y);
  void getAccount()
  {
     cout<<"bank details"<<endl;
     cout<<"name:"<<name<<endl;
     cout<<"account number:"<<accNo<<endl;
     cout<<"account type:"<<accType<<endl;
     cout<<"balance:"<<balance<<endl;
  }

    double fetchAccNum()
  {
   return accNo;
  }
};
void BankAccount:: setAccount(string nam, double x, string acc, double y)
{
  name = nam;
  accNo=x;
  accType=acc;
  balance=y;
}
int main()
{
 BankAccount b[10];
 string name,accType;
 double bal,z,accNo;
 int i,j,n;
 cout<<"enter the no of persons"<<endl;
 cin>>n;
 for(i=0;i<n;i++)
 {
  cout<<"enter details"<<endl;
   cout<<"enter name:"<<endl;
   cin>>name;
   cout<<"enter account number:"<<endl;
   cin>>accNo;
   for(j=0;j<=i-1;j++)
   {

       if(accNo==b[j].fetchAccNum())
       {
           cout<<"This account number already exists!!enter a different account number"<<endl;
           cin>>accNo;
       }
   }
   cout<<"enter account type:"<<endl;
   cin>>accType;
   cout<<"enter balance amount:"<<endl;
   cin>>bal;
   b[i].setAccount(name,accNo,accType,bal);
  }
  cout<<"enter account number to be accessed"<<endl;
  cin>>z;
  for(i=0;i<n;i++)
  {
   if(z==b[i].fetchAccNum())
   {
     b[i].getAccount();
     break;
   }
   else
     cout<<"The account number does not exist"<<endl;
   }
 }
