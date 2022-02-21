#include<iostream>
#include<iomanip>
using namespace std;
#define A 5
#define B 4
#define C 3
#define D 2
class GPA
{
	int id;
	string Name;
	char Grade;
	int sub,credit,total;
	
	public:
		void cal()
		{
		
		}
		void getdata()
		{
			cout<<"Enter ID:";
			cin>>id;
			cin.ignore();
			cout<<"Enter Name:";
			getline(cin,Name);
			cout<<"Enter Subject Credit:";
			cin>>credit;
			cin.ignore();
			cout<<"Enter Grade:";
			cin>>Grade;
			/*for(int i=0;i<3;i++)
			{
				cin>>sub[i];
			    cin>>HRS[i];
			}*/
		}
		void view()
		{
			cout<<setw(10)<<" ID:"<<id;
			cout<<setw(15)<<" Name:"<<Name;
			cout<<setw(20)<<" SUBJECT Credit:"<<credit;
			cout<<setw(15)<<" GRADE:"<<Grade;
		/*	for(int i=0;i<3;i++)
			{
				cout<<setw(10)<<"SUBJECT:"<<sub;
				cout<<setw(10)<<"HOURS:"<<HRS;
			}*/
		}
	
};

int main()
{
	GPA G[3]; int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		G[i].getdata();
		cout<<endl;
	}
	
	for(int i=0;i<n;i++)
	{
		G[i].view();
		cout<<endl;
	}
	
	return 0;
}
