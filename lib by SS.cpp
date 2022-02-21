#include<iostream>
#include<string.h>

using namespace std;

class data
{
    protected:
    char name[100],genre[20];
    int ISBN;
    public:
    void getdata()
    {
        cout<<"Enter the name of the book: ";
        cin.getline(name,100);
        cout<<"Enter the genre of the book: ";
        cin.getline(genre,20);
        cout<<"Enter the ISBN code of the book: ";
        cin>>ISBN;
    }
    virtual void display()
    {

    }
};
class putdata:public data
{
    public:
    void display()
    {
        cout<<"The name of the book is: "<<name<<endl;
        cout<<"The genre of the book is: "<<genre<<endl;
        cout<<"The ISBN of the book is: "<<ISBN<<endl;
    }

};
int main()
{
    data d;
    putdata e;
    data *ptr = &d;
    ptr = &e;
    ptr->getdata();
    ptr->display();
    return 0;
}
