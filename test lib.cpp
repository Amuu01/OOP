#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>
#include <stdio.h>
using namespace std;
int n = 0;
class book
{
    protected:
    int bid,qty;
    string bname,author;
    public:
        void get_books()
        {
            cout<<"Enter Book Id:";
            cin>>bid;
            cin.ignore();
            cout<<"Enter Book Name:";
            getline(cin,bname);
            cout<<"Enter Book Author:";
            getline(cin,author);
            cout<<"Quantity   : ";
            cin>>qty;
        }
        int getbid()
        {
            return bid;
        }
        virtual void show()
        {
            cout<<"Book Id    : "<<bid<<endl;
            cout<<"Book Name  : "<<bname<<endl;
            cout<<"Book Author: "<<author<<endl;
            cout<<"Quantity   : "<<qty<<endl;
        }
};
class stud:public book
{
    int sid;
    string sname;
    public:
        void get_details()
        {
            cout<<"Enter Student Id  :";
            cin>>sid;
            cin.ignore();
            cout<<"Enter Student Name:";
            getline(cin,sname);
        }
        void show()
        {
            cout<<"Student Id  : "<<sid<<endl;
            cout<<"Student Name:"<<sname<<endl;
        }
};
class library:public book
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
            cout<<"Issue date:";
            cin>>Issue_date;
            cout<<"Return date:";
            cin>>return_date;
        }
        void showR()
        {
            cout<<"Student id :"<<studentid<<endl;
            cout<<"Book id    :"<<bookid<<endl;
            cout<<"Issue date :"<<Issue_date<<endl;
            cout<<"Return date:"<<return_date<<endl;
        }
};
void menu()
{
        //system("cls");
        cout << "\n==================\n";
        cout << "        MENU      \n";
        cout << "===================\n";
        cout << "1. Add New Book To LIST\n";
        cout << "2. VIEW BOOK MENU\n";
       // cout << "3. QUERRY \n";
       // cout << "4. MODIFY PRODUCT MENU\n";
        //cout << "5. DELETE PRODUCT FROM PRODUCT MENU \n";
        //cout << "6. BACK TO MAIN MENU\n";
        cout << "Please Enter Your Choice(1-6): ";
}

int main()
{
    int ch, pos, i;
    //stud *ptr[3];
    book *ptr[2];
    library L;
    ptr[0]=&L;
    //ptr[1]=&B;
    ptr[0]->get_details();
    ptr[0]->show();
    return 0;
}
