#include<iostream>
using namespace std;
class student
{
	int id,mark,phone;
	void reg_num()
	{
		cout<<"Give you phone number:"<<endl;
		cin>>phone;
	}
	public:
		input()
		{
			cout<<"Enter the id:"<<endl;
			cin>>id;
			cout<<"Enter the mark:"<<endl;
			cin>>mark;
			reg_num();
			cout<<endl;
		}
		output()
		{
			cout<<id<<endl;
			cout<<mark<<endl;
			cout<<phone<<endl;
		}
};
int main()
{
	//student s1;
	student s1[70]; //array of object
	for(int i=0;i<5;i++)
	{
		s1[i].input();
	    s1[i].output();
	}
	
	//s1.reg_num();
	return 0;
}
