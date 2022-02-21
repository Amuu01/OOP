#include<iostream>
#include<stdlib.h>
#define N 5
using namespace std;
class matrix
{
	int mat[N][N];
	public:
		void add(matrix,matrix,int);
		void input(int);
		void view(int);
};
void matrix::input(int size)
{
	int n=size;

	cout<<"Enter Matrix Element:"<<endl;
	for(int r=0;r<n;r++)
	{
	  for(int c=0;c<n;c++)
	  {
	  	cout<<"m["<<r<<"]["<<c<<"]=";
	  	cin>>mat[r][c];
	  }
	  
	 cout<<endl;
	} 
}
void matrix::view(int size)
{
	int n=size;
	for(int r=0;r<n;r++)
	{
	 for(int c=0;c<n;c++)
	 cout<<mat[r][c]<<"\t";
	 cout<<endl;
	}
	
}
void matrix::add(matrix m1,matrix m2,int size)
{
    int n=size;
    cout<<"Addition of two matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            mat[i][j]=m1.mat[i][j]+m2.mat[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
         cout<<"\t"<<mat[i][j];
        cout<<endl;
    }
}
int main()
{
	int size;
	cout<<"Enter Matrix Size:";
	cin>>size;
	matrix m1,m2,m3;
	m1.input(size);
	cout<<"1st"<<endl;
	m1.view(2);
	m2.input(size);
	cout<<"2nd"<<endl;
	m2.view(2);
	m3.add(m1,m2,size);
	return 0;
}
