#include<stdlib.h>
#include<cstdio>
#include<iostream>
using namespace std;
int n;
class result
{
	int id;
	string Name,sem;
	string sub[10];
	int credit[10],gd[10];
	float SGPA,total_crp,total_cr;
	public:
		result() //deafult constructor
		{ 
			sem="sem0";id=0;Name="null";
			total_cr=0;total_crp=0;
		}
		float grade_point()
		{
			return total_crp;
		}
		void getdata();
		void cal_sem();
		void view();
		int cal_total_crp()
		{ //calculating total credit point
			for(int i=0;i<n;i++)
			total_crp=total_crp+(credit[i]*gd[i]);
			//cout<<"Total Grade Point: "<<total_crp;
			return total_crp;
		}
		int calcredit()
		{ //calculating total credit
			for(int i=0;i<n;i++)
			total_cr=total_cr+credit[i];
			//cout<<"\ntotal Credit: "<<total_cr;
			return total_cr;
		}
		float calSGPA()
		{   //calculating sgpa
			SGPA=(float)(total_crp/total_cr);
			//cout<<"\nSGPA: "<<SGPA;
			return SGPA;
		}
};
void result::getdata()
{	
	cout<<"Enter Necessary Details...!!!";
	cout<<endl<<"\tEnter Semester :";
	cin>>sem;
	cout<<endl<<"\tStudent Id :";
	cin>>id;
	cin.ignore();
	cout<<"\tSudent Name      :";
	getline(cin,Name);
	cout<<"\tNo of Subjects   :";
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		cout<<endl<<"\t Subject-"<<i+1<<":";
		cin>>sub[i];
		cout<<"\t Credit-       "<<i+1<<":";
		cin>>credit[i];
		cout<<"\t Grade point-  "<<i+1<<":";
		cin>>gd[i];
	}
}
void result::view()
{
	cout<<endl;
	cout<<"\t\t\t!!!***SGPA CALCULATION***!!!"<<endl;
	cout<<"\t\t "<<sem<<endl;
	cout<<"\t Id:"<<id;
	cout<<"\t Name: "<<Name<<endl;
	cout<<"\t Subject "<<" Credits"<<"  GRADE"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<" \t "<<sub[i]<<"\t    "<<credit[i]<<"\t    "<<gd[i]<<endl;
	}
	cout<<endl<<"\t Total Credit: "<<total_cr;
	cout<<endl<<"\t Total Grade : "<<total_crp;
	cout<<endl<<"\t SGPA        : "<<SGPA;
}
int main()
{
	result r,r1;
	r.getdata();
	r.calcredit();
	r.cal_total_crp();
	r.calSGPA();
	r.view();
	return 0;
}
