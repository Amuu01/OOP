#include<iostream>
using namespace std;
int sum(int,int); //Function Declartion
int main()
{
	int a,b,c;
	a=10;b=25;
	c=sum(a,b); //Function call a,b are actual arguments(parameters)
	cout<<c<<endl;
	return 0;
}
int sum(int num,int num1) //function definition formal parameters
{
	int total;
	total=num+num1;
	return total;
}
