#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class bank
{
    string branch;
    string IFSC;
    string address;
    int pincode;
    public:
        bank()  //constructor
        {
            branch="BOKARO STEEL CITY";
            IFSC="SBIN0000246";
            address="SEC-4 BOKARO JHARKHAND";
            pincode=827004;
        }
        void showbank()
        {
            cout<<endl;
            cout<<"\t\t   STATE BANK OF INDIA "<<endl;
            cout<<"\t\tBank Branch  : "<<branch<<endl;
            cout<<"\t\tBank IFSC    : "<<IFSC<<endl;
            cout<<"\t\tBank Address : "<<address<<endl;
            cout<<"\t\tBank Pincode : "<<pincode<<endl;
            cout<<"\t\t-------------------------------";
        }
};
class nomination
{
    string N_name,relation,N_address;
    int age;
    public:
        void getnomini()
        {
            cin.ignore();
            cout<<"\t\t-------------------------------"<<endl;
            cout<<"\t\t->Enter Nominee Name  :";
            getline(cin,N_name);
            cout<<"\t\t->Nominee Age :";
            cin>>age;
            cin.ignore();
            cout<<"\t\t->Nominee Relation  :";
            getline(cin,relation);
            cout<<"\t\t->Nominee Address :";
            getline(cin,N_address);
        }
        void shownominee()
        {
            cout<<"\t\t\t!!!Nomination Details!!!"<<endl;
            cout<<"\t\tNominee Name     : "<<N_name<<endl;
            cout<<"\t\tNominee Age      : "<<age<<endl;
            cout<<"\t\tNominee Relation : "<<relation<<endl;
            cout<<"\t\tNominee Address  : "<<N_address<<endl;
        }
};
class cust:public bank,public nomination
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
             cin.ignore();
             cout<<endl;
             cout<<"\t\t->Enter Customer Name       :";
             getline(cin,cname);
             cout<<"\t\t->Initiating Account number :";
             cin>>acno;
             cout<<"\t\t->Enter Account Type        :";
             cin>>type;
             cout<<"\t\t->Enter Aadhaar Number      :";
             cin>>aadhaar;
             cin.ignore();
             cout<<"\t\t->Enter Email Address       :";
             cin>>email;
             cout<<"\t\t->Enter opening Balance     :";
             cin>>balance;
        }
        long getacno()
        {
            return acno;
        }
};

class transaction:public cust
{
    double amount;
    public:
        double amt_deposit()
        {
            cout<<"\t\t->Enter Amount to Deposit :";
            cin>>amount;
            balance=balance+amount;
            cout<<"\n\t\tupdated Balance :"<<balance<<endl;
            return balance;
        }
        double amt_withdraw()
        {
            cout<<"\t\t->Enter Amount to withdraw :";
            cin>>amount;
            if((balance-amount)<=0)
                cout<<"\n\t\tInsufficent Balance"<<endl;
            else
            {
                balance=balance-amount;
                cout<<"\n\t\tupdated Balance :"<<balance<<endl;
                return balance;
            }
        }

        void show()
        {
            cout<<endl;
            cout<<"\t\t---------------------------------"<<endl;
            cout<<"\t\t\t!!!Customer Details!!!"<<endl;
            cout<<"\t\tCustomer Name  : "<<cname<<endl;
            cout<<"\t\tCustomer Ac no : "<<acno<<endl;
            cout<<"\t\tEnter Ac Type  : "<<type<<endl;
            cout<<"\t\tAadhaar Number : "<<aadhaar<<endl;
            cout<<"\t\tEmail Address  : "<<email<<endl;
            cout<<"\t\tCurrent Balance: "<<balance<<endl;
            cout<<"\t\t----------------------------------"<<endl;
        }
        void Viewall()
        {
            cout<<cname<<"\t"<<acno<<"\t "<<type<<"\t   "<<aadhaar<<"\t"<<balance<<"\t\t"<<email;
            cout<<endl;
        }

};
void viewHeading()
{
	cout<<"\t\t!!!Accounts Details!!!"<<endl;
	cout<<"Name\t"<<"\tAc No"<<"\tType"<<"\t  Aadhaar no"<<"\tBalance"<<"\t\tEmail"<<endl;
}
void menu()
{
    system("cls");
    cout<<endl;
    cout<<"\t\t---------------------------------"<<endl;
    cout<<"\t\t!!!***Banking Operations***!!!"<<endl;
    cout<<"\t\t---------------------------------"<<endl;
    cout<<"\t\t 1.Open New Account"<<endl;
    cout<<"\t\t 2.View Customer"<<endl;
    cout<<"\t\t 3.Deposit Money"<<endl;
    cout<<"\t\t 4.Withdraw Money"<<endl;
    cout<<"\t\t 5.View All Acounts"<<endl;
    cout<<"\t\t 6.Remove Accounts"<<endl;
    cout<<"\t\t 7.Exit"<<endl;
    cout<<"\t\t---------------------------------"<<endl;
    cout<<"\t\t Enter your choice(1-7): ";
}
int main()
{
    transaction t1[20];
    int choice,flag=0,n=0,pos;
    long ac_no;
    while(1)
    {
        menu();
        cin>>choice;
        switch(choice)
        {
            case 1:
                t1[n].showbank();
                t1[n].getcust();
                t1[n].getnomini();
				n++;
				cout<<"\t\t---------------------------------"<<endl;
				cout<<"\t\t Account opened successfully...!!!"<<endl;
				cout<<"\t\t---------------------------------"<<endl;
				break;
            case 2:
                if(n>0)
				{
					cout<<"\t\t Enter Account no to View:";
					cin>>ac_no;
					for(int i=0;i<n;i++)
					if(ac_no==t1[i].getacno())
					{
						t1[i].showbank();
						t1[i].show();
						t1[i].shownominee();
						flag++;
					}
				}
				else
				cout<<"\t\t No Details found..."<<endl;

				if(flag==0)
				cout<<"\t\t Account No not found..."<<endl;
                break;
            case 3:
                if(n>0)
				{
					cout<<"\t\t Enter Account no to Deposit:";
					cin>>ac_no;
					for(int i=0;i<n;i++)
					if(ac_no==t1[i].getacno())
					{
						t1[i].amt_deposit();
						flag++;
					}
				}
				else
				cout<<"\t\t No Details found..."<<endl;

				if(flag==0)
				cout<<"\t\t Account No not found..."<<endl;
                break;
            case 4:
                if(n>0)
				{
					cout<<"\t\t Enter Account no to Withdraw:";
					cin>>ac_no;
					for(int i=0;i<n;i++)
					if(ac_no==t1[i].getacno())
					{
						t1[i].amt_withdraw();
						flag++;
					}
				}
				else
				cout<<"\t\t No Details found..."<<endl;

				if(flag==0)
				cout<<"\t\t Account No not found..."<<endl;
                break;
            case 5:
                if(n>0)
				{
					viewHeading();
					for(int i=0;i<n;i++)
					t1[i].Viewall();
				}
				else
				cout<<"\t\t No Record Found..."<<endl;
				break;
            case 6:
                if(n>0)
				{
				   cout<<"Enter AC no to Delete:";
				   cin>>ac_no;
				   for(int i=0;i<n;i++)
				   if(ac_no==t1[i].getacno())
				   {
				   	  cout<<"Record deleted Sucessfully."<<endl;
				   	  pos=i;
                      flag++;
				   	  break;
				   }
				   for (int i = pos; i < n-1; i++)
                   {
                    t1[i]=t1[i+1];
                   }
                   n--;
				}
				else
				cout<<"No Record Found."<<endl;

				if(flag==0)
				cout<<"Reg Id Not found"<<endl;
				break;
            case 7:
                cout<<"\t\t Operation Ended....!!!"<<endl;
                exit(0);
            default:
                cout<<"\t\t ***Wrong Choice***"<<endl;
                break;
        }
        system("pause");
    }
    return 0;
}
