#include<iostream>
using namespace std;
class stud
{
	int id;
	char name[20];
	public:
		void input()
		{
			cout<<"Id:";
			cin>>id;
			cout<<"\nName:";
			cin>>name;
		}
		void view()
		{
			cout<<"Id:"<<id<<endl;
			cout<<"Name:"<<name<<endl;
		}
};
class mca_stud:public stud
{
	int credits;
	public:
		void get_data()
		{
			input();
			cin>>credits;
		}
		void put_data()
		{
			view();
			cout<<credits;
		}
};
class faculty:public stud
{
	int fac_id;
	public:
		void get_fid()
		{
			cout<<"Id:";
			cin>>fac_id;
		}
		void put_fid()
		{
			cout<<"Id:"<<fac_id;
		}
};
