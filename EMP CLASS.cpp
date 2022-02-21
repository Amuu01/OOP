#include<iostream>
using namespace std;
class employee
{
	int id,age;
	string name;
	protected:
		double basic;
	public:
		void getemp()
		{
			cout<<"Employee Id:";
			cin>>id;
			cin.ignore();
			cout<<"Employee Name:";
			getline(cin,name);
			cout<<"Employee Age:";
			cin>>age;
			cout<<"Enter Basic:";
			cin>>basic;
		}
		void showemp()
		{
			cout<<"Emp Id:"<<id;
			cout<<"Name:"<<name;
			cout<<"Age:"<<age;
		}
};
class allowance:public employee
{
	double da,hra;
	protected:
		double gross;
	public:
		void setall()
		{
			da=(basic*20)/100;
			hra=(basic*10)/100;
			gross=basic+da+hra;
		}
		void showall()
		{
			cout<<endl<<"DA:"<<da<<endl<<"HRA:"<<hra<<endl;
		}
};
class deduction:public allowance
{
	double tax,pf,net;
	public:
		void setded()
		{
			tax=(gross*8)/100;
			pf=(gross*5)/100;
			net=(gross-(tax+pf));
		}
		void payslip()
		{
			cout<<"BAsic:"<<basic<<endl;
			cout<<"Gross:"<<gross<<endl;
			cout<<"PF:"<<pf<<endl;
			cout<<"Net Salary:"<<net<<endl;
		}
};
int main()
{
	/*employee E;
	E.getemp();
	E.showemp();*/
	deduction d1,d2;
	d1.getemp();
	d1.setall();
	d1.setded();
	d1.showemp();
	d1.showall();
	d1.payslip();
	return 0;
}
