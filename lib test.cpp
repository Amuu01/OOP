#include<iostream>
#include<string.h>
using namespace std;

class book
{
    int bid;
    string bname,author;
    protected:
        int stock;
    public:
        int getbid()
        {
            return bid;
        }
        int getstock()
        {
            return stock;
        }
        void setBook()
        {
            cout<<"Enter Book Id:";
            cin>>bid;
            cin.ignore();
            cout<<"Enter Book Name:";
            getline(cin,bname);
            cout<<"Enter Book Author:";
            getline(cin,author);
            cout<<"Quantity   : ";
            cin>>stock;
            cout<<"Record Added Sucessfully.!!!"<<endl;
        }
        void showBook()
        {
            cout<<"Book Id    : "<<bid<<endl;
            cout<<"Book Name  : "<<bname<<endl;
            cout<<"Book Author: "<<author<<endl;
            cout<<"Quantity   : "<<stock<<endl;
        }
        int takebook()
        {
            if(stock>0)
            {
                stock--;
                return 1;
            }
            else
            {
                cout<<"\nThe books are not available!!!";
                return -1;
            }
        }
        int returnbook()
        {
            stock++;
            return 1;
        }
};
class stud
{
    int sid;
    string sname;
    long contact;
    public:
        void setStud()
        {
            cout<<"Enter Student Id  :";
            cin>>sid;
            cin.ignore();
            cout<<"Enter Student Name:";
            getline(cin,sname);
            cout<<"Enter Contact";
            cin>>contact;
            cout<<"Record Added Sucessfully.!!!"<<endl;
        }
        void showStud()
        {
            cout<<"Id  : "<<sid<<endl;
            cout<<"Name:"<<sname<<endl;
            cout<<"Contact:"<<contact<<endl;
        }
};
class library:public book,public stud
{
    int studentid,bookid;
    string Issue_date,return_date;
    public:
        void issue()
        {
            cout<<"Student id:";
            cin>>studentid;
            cout<<"Book Id:";
            cin>>bookid;
            /*cout<<"Issue date:";
            cin>>Issue_date;
            cout<<"Return date:";
            cin>>return_date;*/
        }
        void showIssue()
        {
            cout<<"Student id :"<<studentid<<endl;
            cout<<"Book id    :"<<bookid<<endl;
            cout<<"Issue date :"<<Issue_date<<endl;
            cout<<"Return date:"<<return_date<<endl;
        }
        void returnBook()
        {
            int days;
            cout<<"\nEnter book number: ";
            cin>>bid;



        }


};
void admin()
{
    int ch1;
    library L1;
    system("cls");
    do
    {
        system("cls");
        cout<<"\nLibrary DATABASE\n";
        cout<<"-------------------\n";
        cout<<"\n1.Add student\n2.Add books\n3.Display Book\n4.Display Student\n5.Issue Book"<<endl;
        cout<<"6.Return Book\n7.Show issued Book\n8.Go back to menu\n";
        cin>>ch1;
        switch(ch1)
        {
            case 1:
                L1.setStud();
                break;
            case 2:
                 L1.setBook();
                 break;
            case 3:
                L1.showBook();
                    break;
            case 4:
                L1.showStud();
                break;
            case 5:
                L1.issue();
                break;
            case 6:
                L1.returnbook();
                break;
            case 7:
                L1.showIssue();
                break;
            case 8:
                break;
        }
        //cout<<"\nPress Enter to continue:";
        cout<<endl;
        system("pause");
    }while(ch1!=8);

}
int main()
{
        int choice;
        while(1)
        {
            cout << "       MENU      \n";
            cout << "===================\n";
            cout << "1. Admin\n";
            cout << "2. Student\n";
            cout << "3. Exit \n";
            cout << "Please Enter Your Choice(1-3): ";
            cin>>choice;
            switch(choice)
            {
                case 1:
                    admin();
                    break;
                case 2:
                    break;
                case 3:
                    exit(0);
                default: cout<<"\n\nInvalid Entry!!";
            }
        }

}
