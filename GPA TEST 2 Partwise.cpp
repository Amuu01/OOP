#include<iostream>
#include<conio.h>
using namespace std;
class stud
{
	int roll;
	string Name;
	int p1,p2,p3;
	float avg,total;
	public:
		void getdata();
		void showdata();
		void sum();
};
void stud::getdata()
{
	cout<<endl<<"\t Enter Roll : ";
	cin>>roll;
	cin.ignore();
	cout<<"\t Enter Name : ";
	getline(cin,Name);
	cout<<"\t Enter Obtained Marks of Part 1:";
	cin>>p1;
	cout<<"\t Enter Obtained Marks of Part 2:";
	cin>>p2;
	cout<<"\t Enter Obtained Marks of Part 3:";
	cin>>p3;
	
}
void stud::showdata()
{
	cout<<endl<<"\tRoll No     : "<<roll;
	cout<<endl<<"\tName        : "<<Name;
	cout<<endl<<"\tPart 1 Marks: "<<p1;
	cout<<endl<<"\tPart 2 Marks: "<<p2;
	cout<<endl<<"\tPart 3 Marks: "<<p3;
	cout<<endl<<"\tTotal Obtained Marks : "<<total;
	cout<<endl<<"\tAverage Percentage : "<<avg;
}
void stud::sum()
{
	total=p1+p2+p3;
	avg=(total/800)*100;
}
int main()
{
	stud s1;
	cout<<"\t*****GPA CALCULATOR*****";
	s1.getdata();
	s1.sum();
	s1.showdata();
	return 0;
}
