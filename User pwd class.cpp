#include<iostream>
#include<conio.h>
using namespace std;
class log
{
	string username;
	string password;
	public:
		void getuser()
		{
		  cout<<"\t\t\t Input UserName : ";
	      cin>>username;
	      cout<<"\t\t\t Enter PassWord : ";
	      cin>>password;
		}
	void login()
    {
	  getuser();
	  if(username=="Admin")
	  {
		if(password=="admin@")
		cout<<"\t\t\t Login As Admin Sucessful!!!";
		else
		cout<<"\t\t\t ***Invalid PassWord***";
	  }
	  else if(username=="Student")
	  {
		if(password=="student1")
		cout<<"\t\t\t Login As Student Sucessful!!!";
		else
		cout<<"\t\t\t ***Invalid PassWord***";
	  }
	  else
		cout<<"\t\t\t ***Invalid UserName***";
    }
		
};
int main()
{
	cout<<"\t\t\t !!!***LOGIN SYSTEM***!!!"<<endl<<endl;
	log l;
	l.login();
	return 0;
}

