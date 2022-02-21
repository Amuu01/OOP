#include<iostream>
using namespace std;
class employee
{
	int eid,age;
	string name,city;
	double basic,da,hra;   //hra=House Rent Allowance
	double tax,pf,gross,net;//da=Dearness Allowance
	public:
		employee()
		{
		}
		void getemp()
		{
			cout<<"Employee Id:";
			cin>>eid;
			cin.ignore();
			cout<<"Employee Name:";
			getline(cin,name);
			cout<<"Employee Age:";
			cin>>age;
			cin.ignore();
			cout<<"Employee City:";
			getline(cin,city);
			cout<<"Enter Basic:";
			cin>>basic;
			cout<<"----------------------------"<<endl;
		}
		double setall()
		{
			da=(basic*30)/100;
			hra=(basic*20)/100;
			gross=basic+da+hra;
		}
		void show()
		{
			cout<<endl;
			cout<<"***Employee Payment Slip***"<<endl<<endl;
			cout<<"Emp Id      :"<<eid<<endl;
			cout<<"Emp Name    :"<<name<<endl;
			cout<<"Emp Age     :"<<age<<endl;
			cout<<"Emp City    :"<<city<<endl;
			cout<<"Basic Salary:"<<basic<<endl;
			cout<<"Gross Salary:"<<gross<<endl;
			cout<<"PF Amount   :"<<pf<<endl;
			cout<<"----------------------------"<<endl;
			cout<<"Net Salary  :"<<net<<endl;
			cout<<"----------------------------"<<endl;
		}
		friend void setdeduction(employee &);
		~employee(){}
};
void setdeduction(employee &e)
{
	e.tax=(e.gross*7)/100;
	e.pf=(e.gross*10)/100;
	e.net=(e.gross-(e.tax+e.pf));
}
int main()
{
	int n;
	cout<<"No of  Employees:";
	cin>>n;
	employee E[n];
	for(int i=0;i<n;i++)
	{
		E[i].getemp();
		E[i].setall();	
	}
	for(int i=0;i<n;i++)
	{
		setdeduction(E[i]);
    	E[i].show();
	}
	
	return 0;
}
