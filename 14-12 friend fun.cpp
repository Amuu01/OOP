#include<iostream>
using namespace std;
class teacher; //forward declaration 
class stud
{
	int id,mark;
	public:
		void input()
		{
			cout<<"Give the Id:"<<endl;
			cin>>id;
			cout<<"Give the Mark"<<endl;
			cin>>mark;
		}
	friend void display(stud,teacher);
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
	friend void display(stud,teacher);
};
void display(stud s,teacher T)
{
	cout<<s.id<<endl;
	cout<<s.mark<<endl;
	cout<<T.course_id<<endl;
	cout<<T.int_mark<<endl;
}
int main()
{
	stud s1;
	teacher t1;
	s1.input();
	t1.input();
	display(s1,t1);
	return 0;
}
