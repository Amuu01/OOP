#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	int num;
	string name;
	ofstream f1;
	f1.open("ABC.TXT");
	f1<<123;
	f1<<" ";
	f1<<"Welcome";
	f1.close();
	ifstream f2("ABC.TXT");
	f2>>num;
	f2>>name;
	cout<<"File Data:"<<num<<" "<<name;
}
