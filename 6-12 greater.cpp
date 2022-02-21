#include<iostream>
using namespace std;
int main()
{	int num;
	cout<<"Enter a Number:";
	cin>>num;
	if(num>90 && num<100)
	 cout<<"Grade='O'";
	else if(num>=80 && num<=89)
	 cout<<"Grade='A'";
	else if(num>=70 && num<=79)
	 cout<<"Grade='B'";
	else if(num<70)
	 cout<<"PASS";
	else
	cout<<"Invalid input";
	
 return 0;
}
