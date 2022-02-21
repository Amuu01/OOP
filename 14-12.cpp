#include<iostream>
using namespace std;
class Fixed; //forward declaration 
class Bill
{
	int id,unit;
	public:
		void input()
		{
			cout<<"Give the Id:"<<endl;
			cin>>id;
			cout<<"Give the Reading"<<endl;
			cin>>unit;
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
			cout<<"Give the Meter Charge:"<<endl;
			cin>>meter_charge;
			cout<<"Give the Duty"<<endl;
			cin>>duty;
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
	cout<<"Total Bill:"<<cal;
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
