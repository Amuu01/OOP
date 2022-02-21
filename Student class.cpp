#include<iostream>
#include<string>
using namespace std;
class student
{
	int Reg_Id;
	string Name,Course,email;
	float Fee;
	int Credit,Duration;
	public:
		student()  //Default Constructor
		{
			Reg_Id=0;
			Name="Null";
			Course="Null";
			Credit=0;
			Duration=0;
			Fee=0.0;
			email="Null";
		}
		int getRegId()
		{
			return Reg_Id;
		}
		~student()
		{
			cout<<"Object deleted";
		}
		void Input();
		void View();
		//void update();
		void allchange();
		void Delete();
		
	
};
void student::Delete()
{
	
			Reg_Id=0;
			Name="Null";
			Course="Null";
			Credit=0;
			Duration=0;
			Fee=0.0;
			email="Null";
}
void student::allchange()
{
	cout<<"Current Details: \n";
	View();
	Input();
}
void student::Input()
{
	cout<<"\t Enter Student Reg Id  : ";
	cin>>Reg_Id;
	cin.ignore();
	cout<<"\t Enter Student Name    : ";
	getline(cin,Name);
	cout<<"\t Enter Course Detail   : ";
	getline(cin,Course);
	cout<<"\t Enter Course Credit   : ";
	cin>>Credit;
	cout<<"\t Enter Course Duration : ";
	cin>>Duration;
	cin.ignore();
	cout<<"\t Enter Course Fee      : ";
	cin>>Fee;
	cout<<"\t Email Address         : ";
	cin>>email;
}
void student::View()
{
	cout<<endl;
	cout<<"\t Reg Id     :"<<Reg_Id<<endl;
	cout<<"\t Name       :"<<Name<<endl;
	cout<<"\t Course     :"<<Course<<endl;
	cout<<"\t Credit     :"<<Credit<<endl;
	cout<<"\t Duration   :"<<Duration<<endl;
	cout<<"\t Fee Detail :"<<Fee<<endl;
	cout<<"\t Email      :"<<email<<endl;
}

int main()
{
	student s1,s2;
	s1.Input();
	s2.Input();
	s1.View();
	s2.View();
	s1.~student();//destructor call
	s1.View();
//	s1.Delete();
	
	//int n;
	//cout<<"\n\tHow Many Details You Want:";
	//cin>>n;
	/*student s[n];
	for(int i=0;i<n;i++)
	s[i].Input();
	for(int i=0;i<n;i++)
	s[i].View();
	*/
	//s1.update();
	//s1.View();
	//s2.allchange();
	//s2.View();
	//s1.Delete();
	//s1.View();
	
	//s[1].~student();
	//for(int i=0;i<n;i++)
	//s[i].View();
	
	return 0;
}
/*int student::Delete(student p)
{
	delete p;
	cout<<"Object Deleted";
	
}*/
