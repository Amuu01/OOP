#include<iostream>
#include<stdlib.h>
#define N 5
using namespace std;
class matrix
{
	int mat[N][N];
	public:
		void setmatrix(int r,int c)
		{
			cout<<"Enter Element for matrix : \n";
			for(int i=0;i<r;i++)
	 		for(int j=0;j<c;j++)
	 		{
	 			//cout<<"Element a"<<i+1<<j+1<<":";
	 			cout<<"m["<<i<<"]["<<j<<"]=";
				cin>>mat[i][j];
	 		}
		}
		void viewmatrix(int r,int c)
		{
			cout<<"Matrix Elements:"<<endl;
			for(int i=0;i<r;i++)
			{
	 			for(int j=0;j<c;j++)
	  			cout<<mat[i][j]<<" ";
	 			cout<<endl;
			}
		}
		void add(matrix,matrix,int,int);
};
void matrix::add(matrix m1,matrix m2,int r,int c)
{
    cout<<"Addition of two Matrix:"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        mat[i][j]=m1.mat[i][j]+m2.mat[i][j];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        cout<<mat[i][j]<<" ";
        cout<<endl;
    }
}

int main()
{
	int row,col;
	cout<<"Enter Row For matrix:";
	cin>>row;
	cout<<"Enter Column For matrix:";
	cin>>col;
	cout<<endl;
	matrix m1,m2,m3;
	m1.setmatrix(row,col);
	m2.setmatrix(row,col);
	cout<<endl<<"1st Matrix:"<<endl;
	m1.viewmatrix(row,col);
	cout<<endl<<"2nd Matrix:"<<endl;
	m2.viewmatrix(row,col);
	m3.add(m1,m2,row,col);
	return 0;
}
