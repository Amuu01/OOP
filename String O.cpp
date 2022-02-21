#include<iostream>
#include<string.h>
using namespace std;
class my_string
{
    char name[25];
    public:
        void getdata()
        {
            cin>>name;
        }
        void operator+(my_string C)
        {
            strcat(name,C.name);
            cout<<name<<endl;
        }
        void operator==(my_string C)
        {
            if(strcmp(name,C.name)==0)
                cout<<"String are EQUAL"<<endl;
            else
                cout<<"UnEqual String"<<endl;
        }
        void operator=(my_string C)
        {
            strcpy(name,C.name);
        }
        void display()
        {
            cout<<name<<endl;
        }
};
int main()
{
    int ch;
    my_string s1,s2,s3;
    cout<<"Input First string : ";
    s1.getdata();
    cout<<"Input Second string : ";
    s2.getdata();
    while(1)
    {
        cout<<endl;
        cout<<"***String Overloading Operations***"<<endl;
        cout<<"-----------------------------------"<<endl;
        cout<<"1.Concatenate String"<<endl;
        cout<<"2.Compare String"<<endl;
        cout<<"3.Copy String"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:s1+s2;  //s1.operator+(s2);
                   break;
            case 2:s1==s2;
                   break;
            case 3:s3=s1;
                   cout<<"After copying the string is: ";
                   s3.display();
                   break;
            case 4:cout<<"Operation Ended!!!"<<endl;
                   exit(0);
            default:cout<<"***Wrong Choice***"<<endl;
                    break;
        }
    }
    return 0;
}
