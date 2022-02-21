#include<iostream>
using namespace std;
int main()
{	int num,num1;
	cout<<"Enter a Number:";
	cin>>num>>num1;
	switch(num+num1)
	{
		case 100:cout<<"Sum is 100";
		         break;
		case 90:
		default:cout<<"sum Is Less than 100";
		        break;
	}
 return 0;
}
