#include<iostream>
#include<conio.h>
using namespace std;
void login()
{
	string username;
	string password;
	cout<<"\t Input UserName : ";
	cin>>username;
	cout<<"\t Enter PassWord : ";
	cin>>password;
	if(username=="Admin")
	{
		if(password=="admin@")
		cout<<"\t Login As Admin Sucessful!!!";
		else
		cout<<"\t Invalid PassWord";
	}
	else if(username=="Student")
	{
		if(password=="student1")
		cout<<"\t Login As Student Sucessful!!!";
		else
		cout<<"\t Invalid PassWord";
	}
	else
	{
		cout<<"\t Invalid UserName";
	}
}
int main()
{
	cout<<"\t\t !!!***LOGIN SYSTEM***!!!"<<endl;
	login();
	return 0;
}
