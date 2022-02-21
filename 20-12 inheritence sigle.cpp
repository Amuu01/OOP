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
int main()
{
	mca_stud s1;
	s1.get_data();
	s1.put_data();
	return 0;
}
