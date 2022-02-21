#include<iostream>
using namespace std;
class teacher; //forward declaration 
class stud
{
	
	public:
		int id,mark;
		void input()
		{
			cout<<"Give the Id:"<<endl;
			cin>>id;
			cout<<"Give the Mark"<<endl;
			cin>>mark;
		}
};
class teacher
{
	int course_id,int_mark;
	public:
		void input()
		{
			cout<<"Give the Course_Id:"<<endl;
			cin>>course_id;
			cout<<"Give the int Mark"<<endl;
			cin>>int_mark;
		}
	void display(stud s)
	{
		cout<<course_id<<endl;
		cout<<s.mark+int_mark<<endl;
	}
};

int main()
{
	stud s1;
	teacher t1;
	s1.input();
	t1.input();
	t1.display(s1);
	return 0;
}
