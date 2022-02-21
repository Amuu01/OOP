#include<iostream>
using namespace std;
class books
{
	int bookid;
	string bname,author;
	public:
		void input_book()
		{
			cout<<"Bookid:";
			cin>>bookid;
			cout<<"\nBook Name:";
			cin>>bname;
			cout<<"\nAuthor:";
			cin>>author;
		}
		void view_book()
		{
			cout<<"\nBook id:"<<bookid;
			cout<<"\nBook Name:"<<bname;
			cout<<"\nAuthor:"<<author;
		}
};
class stud : public books
{
	int sid;
	string sname;
	public:
		void getd()
		{
		    input_book();
			cout<<"\nId:";
			cin>>sid;
			cout<<"\nName:";
			cin>>sname;	
		}
		void putd()
		{
			cout<<"\nStudent Id:"<<sid;
			cout<<"\nStudent Name:"<<sname;
			view_book();
			
		}
};
int main()
{
	stud s;
	s.getd();
	s.putd();
	return 0;
}
