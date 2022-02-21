#include<iostream>
using namespace std;
int main()
{
	int n,c=0;
	cout<<"Enter a Number:";
	cin>>n;
	if(n==0 || n==1)
	cout<<" Not Prime Number:";
	else
	{
		for(int i=2;i<=n/2;i++)
		{
		  if(n%i==0){
		  	c++;
		  	break;
		}
	}
	if(c==0)
	cout<<"Prime Number:"<<n;
	else
	cout<<"Not Prime:"<<n;
 return 0;
}
}
