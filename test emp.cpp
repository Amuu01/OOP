#include<iostream>
using namespace std;
class employee
{
	int eid,age;
	string name;
	double basic,da,hra;
	double tax,pf,gross,net;
	public:
		void getemp()
		{
			cout<<"Employee Id:";
			cin>>eid;
			cin.ignore();
			cout<<"Employee Name:";
			getline(cin,name);
			cout<<"Employee Age:";
			cin>>age;
			cout<<"Enter Basic:";
			cin>>basic;
		}
		double setall()
		{
			da=(basic*20)/100;
			hra=(basic*10)/100;
			gross=basic+da+hra;
		}
		 void show()
		{
			cout<<endl;
			cout<<"Emp Id      :"<<eid<<endl;
			cout<<"Emp Name    :"<<name<<endl;
			cout<<"Emp Age     :"<<age<<endl;
			cout<<"Basic Salary:"<<basic<<endl;
			cout<<"Gross Salary:"<<gross<<endl;
			cout<<"PF Amount   :"<<pf<<endl;
			cout<<"Net Salary  :"<<net<<endl;
		}
		friend void setded(employee &);
};
void setded(employee &e)
{
	e.tax=(e.gross*8)/100;
	e.pf=(e.gross*5)/100;
	e.net=(e.gross-(e.tax+e.pf));
}
int main()
{
	employee E;
	E.getemp();
	E.setall();
	setded(E);
    E.show();
	return 0;
}
