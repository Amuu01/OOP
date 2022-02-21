#include<stdlib.h>
//#include<cstdio>
#include<iomanip>
#include<iostream>
using namespace std;
class result
{
	int id,n;
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
		float getcredit()
		{
			return total_cr;
		}
		float getcrp()
		{
			return total_crp;
		}
		void getdata();
		void cal_sem();
		void view();
		float cal_total_crp()
		{ //calculating total credit point
			for(int i=0;i<n;i++)
			total_crp=total_crp+(credit[i]*gd[i]);
			//cout<<"Total credit Point: "<<total_crp;
			return total_crp;
		}
		float calcredit()
		{ //calculating total credit
			for(int i=0;i<n;i++)
			total_cr=total_cr+credit[i];
			//cout<<"\ntotal Credit: "<<total_cr;
			return total_cr;
		}
		float calSGPA()
		{   //calculating sgpa
			SGPA=(total_crp/total_cr);
			//cout<<"\nSGPA: "<<SGPA;
			return SGPA;
		}
		~result(){}
};
void result::getdata()
{	
	cout<<"Enter Necessary Details...!!!";
	cout<<endl<<"\tEnter Semester :";
	cin>>sem;
	cout<<endl<<"\tStudent Id :";
	cin>>id;
	cin.ignore();
	cout<<"\tSudent Name:";
	getline(cin,Name);
	cout<<"\tNo of Subjects:";
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		cout<<endl<<"\t Subject-"<<i+1<<":";
		cin>>sub[i];
		cout<<"\t Credit-"<<i+1<<":";
		cin>>credit[i];
		cout<<"\t Grade point-"<<i+1<<":";
		cin>>gd[i];
	}
	calcredit();
	cal_total_crp();
}
void result::view()
{
	cout<<endl;
	cout<<"\t!!!***SGPA CALCULATION***!!!"<<endl<<endl;
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
	cout<<endl<<"\t SGPA        : "<<setprecision(3)<<SGPA<<endl;
}
int main()
{
	cout<<"Enter Number of Semester:";
	int sn;
	float CGPA=0.0,crp=0.0,cr=0.0;
	cin>>sn;
	result r[sn];
	for(int i=0;i<sn;i++)
	{
	   r[i].getdata();
	}
	for(int i=0;i<sn;i++)
	{
	   r[i].calSGPA();
	   r[i].view();
	}

	for(int i=0;i<sn;i++)
	{
		crp=crp+r[i].getcrp();
		//cout<<"S1+s2="<<crp;
		cr=cr+r[i].getcredit();
		//cout<<"C1+C2"<<cr;
		CGPA=(crp/cr);
		//cout<<"CGPA: "<<CGPA;
	}
	cout<<"\n\tANNUAL CGPA :"<<setprecision(3)<<CGPA<<endl;;
	return 0;
}
