#include<iostream>
using namespace std;

int sum(int [],int);
int main()
{
	int size;
	cout<<"Enter size of Array:";
	cin>>size;
	int a[size]; //dynamic array
	for(int i=0;i<size;i++)
	cin>>a[i];
	cout<<"Sum of Array:"<<sum(a,size);
	return 0;
}
int sum(int b[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	sum=sum+b[i];
	return(sum);
}
