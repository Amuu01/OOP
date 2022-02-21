//student management system

#include <iostream>
#include <iomanip>
#include <string.h>
#include<fstream>
using namespace std;
class Student
{

    int roll;
    char name[20];
    char gen;
    int age;
    int marks;
    char email[30];

public:
    int getRoll()
    {                     //to return the roll number only
        return roll;
    }
    void setData()
    {
        cout << "Enter Student Details " << endl;
        cout << "Roll Number  :";
        cin >> roll;
        cout << "Name         :";
        cin.ignore();                        //getline() function takes an auto enter , by taking ignore we can fix that
        cin.getline(name, 20);               //getline() to get input along with whitespaces
        cout << "Gender -->M/F:";
        cin >> gen;
        cout << "Age          :";
        cin >> age;
        cout << "Total Marks  :";
        cin >> marks;
        cout << "E-Mail Id    :";
        cin >> email;
    }

    void modifyData()                   //to modify the data using this function
    {
        cout << "Roll Number  :"<<roll<<endl;
        cout << "Enter Student Details " << endl;
        cout << "Name         :";
        cin.ignore();
        cin.getline(name, 20);
        cout << "Gender -->M/F:";
        cin >> gen;
        cout << "Age          :";
        cin >> age;
        cout << "Total Marks  :";
        cin >> marks;
        cout << "E-Mail Id    :";
        cin >> email;
    }

    void showData(){                   //display for search function and delete 

        cout<<"\nSTUDENT DETAILS\n";
        cout<<"Roll  : "<<roll<<endl;
        cout<<"Name  : "<<name<<endl;
        cout<<"Gender:"<<gen<<endl;
        cout<<"Age   :"<<age<<endl;
        cout<<"Marks :"<<marks<<endl;
        cout<<"E-Mail:"<<email<<endl;
    }

    void getData()              //collectively display
    {

        cout.setf(ios ::left);
        cout << setw(10) << roll;
        cout << setw(20) << name;
        cout << setw(10) << gen;
        cout << setw(5) << age;
        cout << setw(10) << marks;
        cout << setw(30) << email;
        cout << endl;
    }
};

void heading()          //to give a structure to the output result
{

    cout.setf(ios ::left);
    cout << setw(10) << "Roll No";
    cout << setw(20) << "Name";
    cout << setw(10) << "Gender";
    cout << setw(5) << "Age";
    cout << setw(10) << "Marks";
    cout << setw(30) << "E-Mail";
    cout << endl;
}

void menu()                     
{

    cout << "STUDENT RECORDS\n";
    cout << "================\n\n";
    cout << "0. EXIT\n";
    cout << "1. REGISTER NEW STUDENT\n";
    cout << "2. SHOW ALL STUDENT \n";
    cout << "3. SEARCH STUDENT BY ROLL NUMBER \n";
    cout << "4. MODIFY RECORD BY ROLL NUMBER \n";
    cout << "5. DELETE RECORD BY ROLL NUMBER\n";
    cout << "Enter Your Choice: ";
}

int main()
{

    int n = 0, i, ch, rn,flag=0,pos;
    Student s[10];
    do
    {
        system("cls");          //To clear the screen
        menu();
        cin >> ch;
        switch (ch)
        {
        case 1:
            s[n].setData();
            n++;
            cout << "\nRecord Successfully Saved!!!\n";
            break;
        case 2:
            if (n > 0)
            {
                heading();
                for (i = 0; i < n; i++)
                {
                    s[i].getData();
                }
            }
            else
            {
                cout << "\nNothing To Display!!!!\n";
            }
            break;
        case 3:
            
            if (n > 0)
            {
                cout << "\nEnter The Roll You Searching For: ";
                cin >> rn;
                for (i = 0; i < n; i++)
                {
                    if (rn == s[i].getRoll())
                    {
                        s[i].showData();
                        flag++;
                    }
                }
            }
            else{
                cout<<"\nNothing To Display!!!";
            }
            if (flag==0)
            {
                cout<<"\nNo Such Roll Number Found !!!";
            }
            break;
        
        case 4:
            if (n > 0)
            {
                cout << "\nEnter Your Roll Number To Modify:: ";
                cin >> rn;
                for (i = 0; i < n; i++)
                {
                    if (rn == s[i].getRoll())
                    {
                       cout<<"\nFollowing Record Will Be Modified:\n";
                       s[i].showData();
                       
                       cout<<"\nEnter New Record\n";
                       s[i].modifyData();
                       cout<<"\nSuccessfully Modified!!!\n";
                       flag++;
                       break;
                    }
                }
            }
            else{
                cout<<"\nNothing To Display!!!";
            }
            if (flag==0)
            {
                cout<<"\nNo Such Roll Number Found !!!";
            }
            break;
        case 5:
            
            if (n > 0)
            {
                cout << "\nEnter The Roll To Delete: ";
                cin >> rn;
                for (i = 0; i < n; i++)
                {
                    if (rn == s[i].getRoll())
                    {
                        cout<<"\nFollowing Record is Deleted\n";
                        s[i].showData();
                        pos=i;
                        flag++;
                        break;
                    }
                }
                for ( i = pos; i < n-1; i++)
                {
                    s[i]=s[i+1];
                }
                n--;
            }
            else{
                cout<<"\nNothing To Delete!!!";
            }
            if (flag==0)
            {
                cout<<"\nNo Such Roll Number Found !!!";
            }
            break;    

        default:
            break;
        }
        system("pause");
    } while (ch);
}
 

