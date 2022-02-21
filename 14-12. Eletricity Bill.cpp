#include<iostream>
using namespace std;
class Fixed; //forward declaration of class 
class Bill
{
	int id,unit;
	public:
		void input()
		{
			cout<<"\tGive the UserId:";
			cin>>id;
			cout<<"\tGive the Reading:";
			cin>>unit;
			cout<<"--------------------------------------";
		}
	friend void display(Bill,Fixed);
	friend void cal(Bill,Fixed);
};
class Fixed
{
	int meter_charge,duty;
	public:
		void input()
		{
			cout<<endl<<"\tGive the Meter Charge:";
			cin>>meter_charge;
			cout<<"\tGive the E.Duty:";
			cin>>duty;
			cout<<"--------------------------------------";
		}
	friend void display(Bill,Fixed);
	friend void cal(Bill,Fixed);
};
void display(Bill b,Fixed f)
{
	cout<<b.id<<endl;
	cout<<b.unit<<endl;
	cout<<f.meter_charge<<endl;
	cout<<f.duty<<endl;
}
void cal(Bill b,Fixed f)
{
	int cal=(b.unit*10)+(f.meter_charge+f.duty);
	//per unit charge is set to RS10
	cout<<endl<<"\tTotal Bill Generated:"<<cal;
}
int main()
{
    Bill b1;
    Fixed f1;
    b1.input();
    f1.input();
    cal(b1,f1);
	//display(b1,f1);
	return 0;
}
