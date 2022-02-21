#include<iostream>
using namespace std;
int swap(int &a,int &b)
{
	int x=a;
	a=b;
	b=x;
	return a,b;
}
int main()
{
	int a,b,c;
	a=10;b=25;
	swap(a,b);
	cout<<"A="<<a<<endl;
	cout<<"B="<<b;
	//cout<<c<<endl;
	return 0;
}

