#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class bank
{
    protected:
    string bname,branch;
    string IFSC;
    string address;
    public:
        void getbank()
        {
            cout<<"Bank Name  :";
            getline(cin,bname);
            cout<<"Bank Branch:";
            getline(cin,branch);
            cout<<"Bank IFSC:";
            cin>>IFSC;
            cin.ignore();
            cout<<"Bank Address:";
            getline(cin,address);
        }
        void showbank()
        {
            cout<<endl;
            cout<<"Bank Name   :"<<bname<<endl;
            cout<<"Bank Branch :"<<branch<<endl;
            cout<<"Bank IFSC   :"<<IFSC<<endl;
            cout<<"Bank Address:"<<address<<endl;
        }
};
class cust:public bank
{
    protected:
        long acno;
        string cname;
        double balance;
    public:
        void getcust()
        {
             cout<<"Enter Customer Name:";
             getline(cin,cname);
             cout<<"Enter Account no:";
             cin>>acno;
             cout<<"Enter opening Balance:";
             cin>>balance;
        }
        virtual void show()=0;
        virtual double getamt()=0;
       /* void show()
        {
            cout<<endl;
            cout<<"Customer Name :"<<cname<<endl;
            cout<<"Customer Ac no:"<<acno<<endl;
            cout<<"Balance amount:"<<balance<<endl;
        }*/

};
class deposit:public cust
{
    double amount;
    public:
        double getamt()
        {
            cout<<"Enter Amount to Deposit:";
            cin>>amount;
            balance=balance+amount;
            cout<<"updated Balance:"<<balance;
            return balance;
        }

        void show()
        {
            cout<<endl;
            cout<<"Customer Name :"<<cname<<endl;
            cout<<"Customer Ac no:"<<acno<<endl;
            cout<<"Current Balance:"<<balance<<endl;
        }

};
class withdraw:public cust
{
    double amount;
    public:
        double getamt()
        {
            cout<<"Enter Amount to withdraw:";
            cin>>amount;
            if((balance-amount)<0)
                cout<<"Insufficent Balance"<<endl;
            else
            {
                balance=balance-amount;
                return balance;
                //cout<<"updated Balance:"<<balance;
            }
        }
        void show()
        {
            cout<<endl;
            cout<<"Customer Name :"<<cname<<endl;
            cout<<"Customer Ac no:"<<acno<<endl;
            cout<<"Current Balance:"<<balance<<endl;
        }

};
int main()
{

    cust *pt[3];
    int ch;
    bank b1;
    deposit obj1;
    withdraw obj2;
    pt[0]=&obj1;
    pt[1]=&obj2;

    pt[1]->getbank();
    pt[1]->getcust();
    pt[1]->showbank();
    pt[1]->show();
    //pt[2]->getamt();
    //pt[2]->show();
    //pt[2]->getamt();
//pt[2]->show();

    cout<<"Enter Transaction type"<<endl;
    cout<<"1.Deposit\n";
    cout<<"2.Withdraw\n";
    cout<<"Enter Your Choice:";
    cin>>ch;
    //pt[ch-2]->deposit();
    pt[ch-0]->getamt();
    pt[ch-0]->show();
    pt[ch-1]->getamt();

    pt[ch-1]->show();
    return 0;
}
