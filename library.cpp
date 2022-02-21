#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int isbn2,index;
int search(int isbn);
int no_stud=0,bkid=0;
class library
{
    public:
    virtual int returnbook()
    {
        return 0;
    }
    virtual int get_book()
    {
        return 0;
    }
    virtual void addbook()
    {}
    virtual void add_stud()
    {}
    virtual int get_isbn()
    {
        return 0;
    }
    virtual string str()
    {
        return"";
    }
    virtual int get_stock()
    {
        return 0;
    }
    virtual long get_contact()
    {
        return 0;
    }
    virtual string str2()
    {
        return"";
    }
};

library *stud[100],*bks[100];

class book_store:public library
{
    private:
    string bname;
    int isbn;
    int stock;
    public:
    book_store()
    {
        stock=0;
    }

    int get_isbn()
    {
        return isbn;
    }
    string str()
    {
        return bname;
    }
    int get_stock()
    {
         return stock;
    }
    int returnbook()
    {
        stock++;
        return 1;
    }
    int get_book()
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
    void addbook()
    {
        try
        {
            cout<<"Enter book number: ";
            cin>>isbn;
            if(isbn<0)
                throw(isbn);

        }
        catch(int x)
        {
            cout<<"ISBN Can't be Negative number";
            exit(0);
        }
        cin.ignore();
        cout<<"Enter name of the book: ";
        getline(cin,bname);
        try
        {
            cout<<"Enter number of books available: ";
            cin>>stock;
            if(stock<0)
                throw(stock);

        }
        catch(int x)
        {
            cout<<"Stock Can't be Negative number";
            exit(0);
        }
    }
};
class students:public library
{
    private:
    string name;
    long contact;
    public:
    long get_contact()
    {
        return contact;
    }
    string str2()
    {
        return name;
    }
    int returnbook()
    {
        int days;
        cout<<"\nEnter book number: ";
        cin>>isbn2;
        index=search(isbn2);
        if(index!=-1)
        {
            cout<<"\nEnter the number of days since the book was borrowed: ";
            cin>>days;
            cout<<"\nExtra fees to be paid: Rs."<<(days-5)*1;
            return bks[index]->returnbook();
        }
        else
        return -1;
    }
    int get_book()
    {
        cout<<"\nEnter the Book number: ";
        cin>>isbn2;
        index=search(isbn2);
        if(index!=-1)
        {
            cout<<"\nPlease return the book within 10 days!!!";
            return bks[index]->get_book();
        }
        else
        return -1;
    }
    void add_stud()
    {
        cout<<"\nEnter Student Name:";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter Student Contact:";
        cin>>contact;
    }
};

void display()
{
    cout<<"\nThe available books are:\n\nISBN\t-\tName\t-\tStock\n";
    for(int i=0;i<bkid;i++)
    {
        cout<<"\n"<<bks[i]->get_isbn()<<"\t-\t"<<bks[i]->str()<<"\t-\t"<<bks[i]->get_stock();
    }
}
void displays()
{
    cout<<"\nThe Enrolled students are:-"<<endl;
    cout<<"\nStudent Name\t-Contact\n";
    for(int i=0;i<no_stud;i++)
    {
        cout<<"\n"<<stud[i]->str2()<<"\t-"<<stud[i]->get_contact()<<endl;
    }
}

void student()
{
    int ch,id;
    system("cls");
    cout<<"\nSTUDENT Operation\n";
    cout<<"--------------------\n";
    cout<<"Enter library number: ";
    cin>>id;
    id--;
    do
    {
        system("cls");
        cout<<"\n1.Display Books\n2.Take Books\n3.Return Book\n4.Go to main menu\n";
        cin>>ch;
        switch(ch)
        {
            case 1: display();
                    break;
            case 2: if(stud[id]->get_book()==-1)
                        cout<<"\nInvalid Number!!!";
                    else
                        cout<<"\nPlease wait...\n";
                    break;
            case 3: if(stud[id]->returnbook()==-1)
                    cout<<"\nInvalid Number!!!";
                    else
                    cout<<"\nPlease wait...\n";
                    break;
            case 4:
                break;
        }
        cout<<endl;
        system("pause");
    }while(ch!=4);
}

void admin()
{
    int ch1;
    system("cls");
    do
    {
        system("cls");
        cout<<"\nLibrary DATABASE\n";
        cout<<"-------------------\n";
        cout<<"\n1.Add student\n2.Add books\n3.Display\n4.Display Student\n5.Go back to menu\n";
        cin>>ch1;
        switch(ch1)
        {
            case 1:
                stud[no_stud]=new students;
                stud[no_stud]->add_stud();
                no_stud++;
                cout<<"The Library number is: "<<no_stud<<endl;
                break;
            case 2: bks[bkid]=new book_store;
                    bks[bkid]->addbook();
                    bkid++;
                    break;
            case 3: display();
                    break;
            case 4:
                displays();
                break;
            case 5:
                break;
        }
        cout<<"\nPress Enter to continue:";
        getch();
    }while(ch1!=5);
}
int search(int isbn)
{
    for(int i=0;i<bkid;i++)
    {
        if(bks[i]->get_isbn()==isbn)
        return i;
    }
    cout<<"No book found!!!";
    return -1;
}
int main()
{
    int choice;
    cout<<"!!!Library System!!!"<<endl;
    while(1)
    {
        cout<<"\n1.Administrator\n2.Student\n3.Exit\nEnter your choice(1-3): ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                admin();
                break;
            case 2:
                student();
                break;
            case 3:
                exit(0);
            default: cout<<"\n\nInvalid Entry!!";
                break;
        }
    }
    return 0;
}
