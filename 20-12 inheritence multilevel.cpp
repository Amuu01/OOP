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
class skill:public mca_stud
{
	//cannpt acces id,name,credit, but i can access input,view function
	int noc;
	public:
		void get_inp()
		{
			get_data();
			cout<<"No of Courses:";
			cin>>noc;
		}
		void put_inp()
		{
			put_data();
			cout<<"No of courses:"<<noc;
		}
};
int main()
{
	/*mca_stud s1;
	s1.get_data();
	s1.put_data();*/
	skill s1;
	s1.get_inp();
	s1.put_inp();
	return 0;
}
