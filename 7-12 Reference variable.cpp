#include<iostream>
using namespace std;
int & max(int &,int &); //Function Declartion
int main()
{
	int a,b,c;
	a=10;b=25;
	c=max(a,b)=50;
	//num=50;
	cout<<a<<endl;
	//cout<<"Sum:"<<c<<endl;
	//cout<<a<<" "<<b<<endl;
	return 0;
}
int & max(int &num,int &num1) //num,num1 are reference variables
{
	int total;
	num=35;num1=25;
	total=num+num1;
	if(num>num1)
	 return(num);
	else
	return(num1);
//	return total;
}
