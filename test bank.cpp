#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class bank
{
    protected:
    string branch;
    string IFSC;
    string address;
    public:
        void getbank()
        {
            cin.ignore();
            cout<<"\t\t->Bank Branch:";
            getline(cin,branch);
            cout<<"\t\t->Bank IFSC:";
            cin>>IFSC;
            cin.ignore();
            cout<<"\t\t->Bank Address:";
            getline(cin,address);
        }
        void showbank()
        {
            cout<<endl;
            cout<<"\t\tBank Branch :"<<branch<<endl;
            cout<<"\t\tBank IFSC   :"<<IFSC<<endl;
            cout<<"\t\tBank Address:"<<address<<endl;
        }
};
class cust
{
    protected:
        long acno;
        string cname,type;
        long aadhaar;
        string email;
        double balance;
    public:
        void getcust()
        {
             cout<<"\t\t->Enter Customer Name  :";
             getline(cin,cname);
             cout<<"\t\t->Enter Account number :";
             cin>>acno;
             cout<<"\t\t->Enter Account Type   :";
             gets(type);
             cout<<"\t\t->Enter Aadhaar Number :";
             cin>>aadhaar;
             cin.ignore();
             cout<<"\t\t->Enter Email Address  :";
             cin>>email;
             cout<<"\t\t->Enter opening Balance:";
             cin>>balance;
        }
        long getacno()
        {
            return acno;
        }
};
class transaction:public bank,public cust
{
    double amount;
    public:
        double amt_deposit()
        {
            cout<<"\t\t->Enter Amount to Deposit:";
            cin>>amount;
            balance=balance+amount;
            cout<<"\n\t\tupdated Balance:"<<balance<<endl;
            return balance;
        }
        double amt_withdraw()
        {
            cout<<"\t\t->Enter Amount to withdraw:";
            cin>>amount;
            if((balance-amount)<0)
                cout<<"\n\t\tInsufficent Balance"<<endl;
            else
            {
                balance=balance-amount;
                cout<<"\n\t\tupdated Balance:"<<balance<<endl;
                return balance;
            }
        }

        void show()
        {
            cout<<endl;
            cout<<"\t\tBank Branch    :"<<branch<<endl;
            cout<<"\t\tBank IFSC      :"<<IFSC<<endl;
            cout<<"\t\tBank Address   :"<<address<<endl;
            cout<<"\t\tCustomer Name  :"<<cname<<endl;
            cout<<"\t\tCustomer Ac no :"<<acno<<endl;
            cout<<"\t\tEnter Ac Type  :"<<type<<endl;
            cout<<"\t\tAadhaar Number :"<<aadhaar<<endl;
            cout<<"\t\tEmail Address  :"<<email<<endl;
            cout<<"\t\tCurrent Balance:"<<balance<<endl;
        }

};
void menu()
{
    cout<<endl;
    cout<<"\t\t***Banking Operations***"<<endl;
    cout<<"\t\t---------------------------"<<endl;
    cout<<"\t\t 1.Open Account"<<endl;
    cout<<"\t\t 2.View Customer"<<endl;
    cout<<"\t\t 3.Deposit Money"<<endl;
    cout<<"\t\t 4.Withdraw Money"<<endl;
    cout<<"\t\t 5.Exit"<<endl;
    cout<<"\t\t Enter your choice(1-5): ";
}
int main()
{
    transaction t1;
   // t1.getbank();
   // t1.getcust();
    //t1.show();
   // cout<<"depositong"<<endl;
   // t1.damt();
    //t1.show();
    //cout<<"withdrwaing"<<endl;
   // t1.wamt();
    //t1.show();
    int ch;
    while(1)
    {
        menu();
        cin>>ch;
        switch(ch)
        {
            case 1:t1.getbank();
                   t1.getcust();
                   break;
            case 2:t1.show();
                   break;
            case 3:t1.amt_deposit();
                   break;
            case 4:t1.amt_withdraw();
                   break;
            case 5:cout<<"\t\tOperation Ended....!!!"<<endl;
                   exit(0);
            default:cout<<"\t\t***Wrong Choice***"<<endl;
                    break;
        }
    }
    return 0;
}
