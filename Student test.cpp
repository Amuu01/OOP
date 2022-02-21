#include<iostream>
#include<string>
using namespace std;
class student
{
	int Reg_Id;
	string Name,Course,email;
	float Fee;
	int Duration;
	public:
		student()  //Default Constructor
		{
			Reg_Id=0;
			Name="Null";
			Course="Null";
			Duration=0;
			Fee=0.0;
			email="Null";
		}
		~student()
		{}
		int getRegId()
		{
			return Reg_Id;
		}
		void Input();
		void View();
		void update();
		void Delete();
};
void student::update()
{
	cout<<"Student Reg Id :"<<Reg_Id<<endl;
	int ch;
		system("cls");
		cout<<"***UPDATE MENU***"<<endl;
		cout<<"1.Update Name"<<endl;
		cout<<"2.Update Course"<<endl;
		cout<<"3.Update Duration"<<endl;
		cout<<"4.Update Fee"<<endl;
		cout<<"5.Update Email"<<endl;
		cout<<"6.EXit"<<endl;
		cout<<"What do you Want to Update:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Student Name :";
	            cin.ignore();
				getline(cin,Name);
				break;
			case 2:
				cout<<"Course Detail :";
				cin.ignore();
				getline(cin,Course);
				break;
			case 3:
				cout<<"Course Duration :";
				cin>>Duration;
				break;
			case 4:
				cout<<"Course Fee :";
				cin>>Fee;
				break;
			case 5:
				cin.ignore();
				cout<<"Email Address :";
				cin>>email;
				break;
			case 6:
				cout<<"Exiting";
				break;
			default:cout<<"Wrong choice";
			        break;
		}
}
/*void student::Delete()
{
			Reg_Id=0;
			Name="Null";
			Course="Null";
			Duration=0;
			Fee=0.0;
			email="Null";
}*/
void student::Input()
{
	cout<<"\tGive Student Details!!!"<<endl;
	cout<<"Student Reg Id :";
	cin>>Reg_Id;
	cin.ignore();
	cout<<"Student Name   :";
	getline(cin,Name);
	cout<<"Course Detail  :";
	getline(cin,Course);
	cout<<"Course Duration:";
	cin>>Duration;
	cout<<"Course Fee     :";
	cin>>Fee;
	cin.ignore();
	cout<<"Email Address  :";
	cin>>email;
}
void student::View()
{
	cout<<Reg_Id<<"\t"<<Name<<"\t "<<Course<<"\t"<<Duration<<"\t"<<Fee<<"\t"<<email;
	cout<<endl;
}
void viewH()
{
	cout<<"Id\t"<<"  Name"<<"\t\t Course"<<"\t  Duration"<<"\tFee"<<"\tEmail"<<endl;
}
void menu()                     
{

    cout <<"\n!!!***STUDENT INFORMATION SYSTEM***!!!"<<endl;
    cout <<"----------------------------------------"<<endl<<endl;
    cout <<"1. Register New Student"<<endl;
    cout <<"2. Show All Student Record"<<endl;
    cout <<"3. Search Student By Reg. Number"<<endl;
    cout <<"4. Update Details By Reg. Number"<<endl;
    cout <<"5. Delete student Record"<<endl;
    cout <<"6. Exit."<<endl;
    cout <<"Enter Your Choice: ";
}

int main()
{
	int n=0,ch,count,flag=0,reg,pos;
	cout<<"No of Record you want to store:";
	cin>>count;  
	student s[count];
	while(1)
	{
		menu();
		cin>>ch;
		system("cls");
		switch(ch)
		{
			case 1:
				s[n].Input();
				n++;
				cout<<"Record Added successfully..."<<endl;
				break;
			case 2:
				if(n>0)
				{
					viewH();
					for(int i=0;i<n;i++)
					s[i].View();
				}
				else
				cout<<"No Record Found..."<<endl;
				break;
			case 3:
				if(n>0)
				{
					cout<<"Enter Reg.Id to View:";
					cin>>reg;
					for(int i=0;i<n;i++)
					if(reg==s[i].getRegId())
					{
						viewH();
						s[i].View();
						flag++;
					}
				}
				else
				cout<<"No Details found..."<<endl;
				
				if(flag==0)
				cout<<"Reg.Id not found..."<<endl;
				break;
			case 4:
				cout<<"***Reg.ID Cannot be Changed.***"<<endl;
				if(n>0)
				{
				   cout<<"Enter Reg.Id to change:";
				   cin>>reg;
				   for(int i=0;i<n;i++)
				   if(reg==s[i].getRegId())
				   {
				   	  cout<<"Enter New Record:--\n";
				   	  s[i].update();
				   	  flag++;
				   	  cout<<"Record Modified Sucessfully."<<endl;
				   	  break;
				   }
				}
				else
				cout<<"No Record Found."<<endl;
				
				if(flag==0)
				cout<<"Reg Id Not found"<<endl;
				break;
			case 5:
				if(n>0)
				{
				   cout<<"Enter Reg.Id to Delete:";
				   cin>>reg;
				   for(int i=0;i<n;i++)
				   if(reg==s[i].getRegId())
				   {
				   	  //s[i].Delete();
				   	  //s[i].~student();
				   	  cout<<"Record deleted Sucessfully."<<endl;
				   	  pos=i;
                      flag++;
				   	  break;
				   }
				   for (int i = pos; i < n-1; i++)
                   {
                    s[i]=s[i+1];
                   }
                   n--;
				}
				else
				cout<<"No Record Found."<<endl;
				
				if(flag==0)
				cout<<"Reg. Id Not found"<<endl;
				break;
			case 6:
				cout<<"Exiting From Main Menu"<<endl;
				exit(0);
			default:cout<<"Wrong Choice"<<endl;
			        exit(0);
		}
		system("pause");
	}
	return 0;
}
