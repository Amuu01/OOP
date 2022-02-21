#include<iostream>
using namespace std;
class bankac
{
	string name;
	double acno;
	char type[10];
	float balance;
	public:
		bankac()
		{
			acno=0;
			balance=0.0;
		}
	void assign();
	void deposit()
	{
		int amount;
		cout<<"\nEnter amout to deposit: ";
		cin>>amount;
		balance=balance+amount;
		cout<<"\nUpdated Balance: "<<balance<<endl;
	}
	void display()
	{
		cout<<"\nCustomer Name : "<<name;
		cout<<"\nAccount No    : "<<acno;
		cout<<"\nAccount Type  : "<<type;
		cout<<"\nBalance       : "<<balance<<endl;
	}
	void withdraw()
	{
		int amount;
		cout<<"\nEnter amount to withdraw: ";
		cin>>amount;
		if(amount<=balance)
		{
			cout<<"***Withdrwal Sucessful***";
			balance=balance-amount;
			cout<<"\nUpdated Balance: "<<balance<<endl;
		}
		else
		cout<<"***Insufficient Fund***"<<endl;
	}

};
void bankac::assign()
{
	cout<<"Customer Name  : ";
	getline(cin,name);
	cout<<"Account Number : ";
	cin>>acno;
	cin.ignore();
	cout<<"Account Type   : ";
	cin.getline(type,10);
	cout<<"Opening Balance: ";
	cin>>balance;
}
int main()
{
	bankac b1;
	b1.assign();
	int ch;
	while(1)
	{
		cout<<"Account Operation!!!";
		cout<<"\n1.Deposit\n2.Withdraw\n3.display\n4.EXIT\n";
		cout<<"Enter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1: b1.deposit();
			        break;
			case 2: b1.withdraw();
			        break;
			case 3: b1.display();
			        break;
			case 4:exit(0);
			default:cout<<"***Wrong Choice*** TRY AGAIN!!!";
		}
	}
	return 0;
}
