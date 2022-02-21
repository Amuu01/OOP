#include<iostream>
using namespace std;
class student
{
	int id,mark,phone;
	static int count1;
	void reg_num()
	{
		cout<<"Give you phone number:"<<endl;
		cin>>phone;
	}
	public:
		student()
		{
			cout<<"Enter the id:"<<endl;
			cin>>id;
			cout<<"Enter the mark:"<<endl;
			cin>>mark;
			cout<<"Enter Phone"<<endl;
			cin>>phone;
			count1++;
			cout<<count1;
			cout<<endl;
		}
		student(int i,int m,int p)
		{
			id=i;
			mark=m;
			phone=p;
			cout<<endl;
		}
		student (student &s)
		{
			id=s.id;
			mark=s.mark;
			phone=s.phone;
		}
		output()
		{
			cout<<id<<endl;
			cout<<mark<<endl;
			cout<<phone<<endl;
		}
		~student(){
		};
		
};
int main()
{
	student s1(23,35,4564);
	s1.output();
	student s2(s1);
	s2.output();
//	student s1[70]; //array of object
	/*for(int i=0;i<5;i++)
	{
		//s1[i].input();
	    s1[i].output();
	}*/
	
	//s1.reg_num();
	return 0;
}
