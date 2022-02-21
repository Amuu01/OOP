#include<iostream>
#include<string.h>
using namespace std;

class stud
{
	int id;
	char name[20];
	public:
		stud(int num,char name_dup[20])
		{
			id=num;
			strcpy(name,name_dup);
		}
		void view()
		{
			cout<<"base Class "<<endl;
			cout<<"Id:"<<id<<endl;
			cout<<"Name:"<<name<<endl;
		}
};
class mca_stud:public stud
{
	int credits;
	public:
		mca_stud(int id_dup,char name_dup1[20],int cr):stud(id_dup,name_dup[20])
		{
			//Assignment section
			cout<<"Derived class"<<endl;
			credits=cr;
		}
		void put_data()
		{
			view();
			cout<<credits;
		}
};
int main()
{
	mca_stud s1(12,"Ravi",90);
	
	//s1.put_data();
	return 0;
}
