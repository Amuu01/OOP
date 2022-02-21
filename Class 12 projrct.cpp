 /*                     PAYROLL MANAGEMENT SYSTEM

Salary Menu
1. Addition of employees
2. Calculate total salary of employee you want and display.
3. Display the details of employee you want.
4. Display the minimum and maximum salary of designation.
5. To change the basic of employee you want. 
6. To change the name of employee you want.
7. To change in all field.
8. To find retirement in a particular year.
9. Exit.

1. Addition of employees
   Allows input in
  ENO   -Employee no
  Name - Employee name
  DOJ - Date of joining
  DOB - Date of birth
  DOR - Date of retirement
  YEAR - Year of retirement
Designation
DA
HRA
Basic
Total
If you wish to enter details of more employees. Give input ‘y’ to continue

2. Calculate total salary of employee and display. It takes record of employee one by one from information stored. Calculate total salary and display only ENO and total salary.

3. Display the details of employee you want
Give E.no of employee as a input of which you want to find details. It compare the input value to the value inside file after finding it will display the details.

4. Display maximum and minimum salary of designation you want.
Give designation as input of which maximum and minimum salary you want to know. It take record one by one. Compare designation of input value and inside the file and find minimum and maximum salary .shows the value.

5.   To change the basic of employee you want.
Give E.no as input and inside the file. If found it call function change Basic. Enter the new Basic, previous Basic and change Basic will display.

6. To change the name of employee you want.
Enter E.no of which you want to change name. it compare E.no as input and E.no inside the file. It call RName() to change to change name and display details.

7. To change in all field.
Enter E.no of which you want to change all details. It compare E.no as input and E.no inside the file. It call the function allchange() to change all the details.

8. To find retirement in a particu  
                                   PROGRAM */
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
class Salary
{
 int ENO;
char Name[20];
int DOJ;
int DOB;
int DOR;
int DA, HRA, Basic, Total;
int YEAR;
char designation[20];
public:
salary()
{
   ENO=0; 
   strcpy (Name,"NULL");
   DOJ=0; 
   DOR=0;
   DA=0; 
   HRA=0; 
   Total=0;
   YEAR=0;
   strcpy(designation , "NULL");
}
void enter()
{
 cout<<"enter the details as like 1.ENO, 2.Name, 3.DOJ, 4.DOB, 5.DOR, 6.YEAR,7.Basic, 8.DA, 9.HRA"<<endl;
  
cin>>ENO>>Name>>DOJ>>DOB>>DOR>>YEAR>>Basic>>DA>>HRA; 
}

void salaryDisplay()
{
  cout<<"ENO"<<ENO<<"Total salary"<<Total<<endl;
}
 int RENO()
 {
return ENO;
 }
  char RDesig()
 {
  return designation ;
 }
int Retirement()
{
 Return YEAR ;
}
void changeBasic()
{
cout<<"current Basic"<<Basic;
cout<<"change Basic";
cin>>Basic;
 }

void calculate ()
 {
Total= Basic+ DA+ HRA  ;
 }

void Display()
 {
cout<<"1."<<ENO<<"2."<<Name<<"3."<<DOJ<<"4."<<DOB<<"5."<<
  DOR<<"6."<<YR<<"7."<<Basic<<"8."<<DA<<"9."<<HRA<<endl;
 }

void allchange()
{
cout<<"current details"<<T.Display() ;
cout<<"change in all field";
T.enter();
 }
 ~Salary();
};

//#include<iomanip.h>

 void main()
{
 clrscr();
 cout<<"project work by AMAN KUMAR" ;
 cout<<"class 12/B ,Roll no-9 \n" ;
 cout<<"Topic :- project work on payroll \n" ;
 cout<<"subject teacher :- Mr. Santosh Sir \n" ;
 cout<<"press any key to continue";
  
  Salary T ;
  int p ;
 cout<<"salary menu \n" ;
 cout<<"1. enter details \n" ;
 cout<<"2. calculate payment \n" ;
 cout<<"3. display details you want \n";
 cout<<"4. maximum salary of designation \n" ;
 cout<<"5. change the basic \n";
 cout<<"6. to change the name "<<endl ;
 cout<<"7. to change in all field \n" ;
 cout<<"8. retirement in particular year \n";
 cout<<"enter your choice \n" ;
  cin>>p;
 switch(p)
{
 case 1 :
    char wish = ='y' ;
    while(wish=='y')
   {
      T.enter() ;
     f1.write("PAY.DAT",ios::binary / ios::app)
    cout<<"continue(Y/N)?";
    cin>>wish ;
    } 
    break ;

case 2:
 fstream f2("PAY.DAT",ios::binary / ios::in / ios::out) ;
 while(f2.read((char*)&T,sizeof(T)))
 {
  T.calculate() ;
  f2.seekp(-1*sizeof(T), ios::cur);
  f2.write((char*)&T, sizeof(T));
  T.salaryDisplay();
  f2.close();
 break ;
case 3 : 
 ifstream f3("PAY.DAT", ios::binary);
 cout<<"enter ENO";
  cin>>z;
while(f3.read((char*)&T, sizeof(T)))

 if(T.RENO()==z)
 T.Display();
 f3.close();
 break ;

case 4 :
 char D[20];
 cout<<"enter the designation \n";
 get(D);
 int m=0, min=0, max=0 ;
 ifstream f4("PAY.DAT", ios::binary);
 while(f4.read((char*)&T.sizeof(T)))
 {
  if(strcmp(T.RDesig(),D)==0)
  {
     if(m==0)
     {
       max=total;
       min=total;
          }
  else
        {
          if(total>max)
            max=total;
          if(total<min)
            min=total;
  }
 m++;
 }
}
cout<<"maximum salary"<<max<<endl;
cout<<"minimum salary"<<min<<endl;
 break;

case 5 :
 int R;
 cout<<"enter E.no which you want to change Basic"<<endl;
 cin>>R;
 fstream f5("PAY.DAT",ios::binary/ios::in/ios::out);
 while(f5.read((char*)&T,sizeof(T)))
  { 
      if(T.RENO()==R)
      T.changeBasic();
      f5.seekp(-1*sizeof(T),ios::cur);
      f5.write((char*)&T,sizeof(T));
  }
f5.close();
 break();

case 6 :
 int R, char p[20];
 cout<<"enter E.no of which you want to change name \n";
 cin>>R;
 cout<<"enter the  new name you want to continue with ";
 gets(p);
 fstream.f6("PAY.DAT",ios::binary/ios::in/ios::out);
  while(f6.read((char*)&T,sizeof(T)))
 { 
    if(T.RENO()==R)
     T.RName(p);
     T.Display()
     f6.close();
 break();
}

case 7 :
 fstream f8("PAY.DAT";ios::binary);
 int x;
 cout<<"enter E.no of which you want to change all details\n";
 cin>>x;
  while(f8.read((char*)&T,sizeof(T)))
  if(T.RENO()==x)
  T.allchange();
  f8.seekp(-1*sizeof(T),ios::cur);
  f8.write((char*)&T,sizeof(T))
  f8.close();
 break();

 
case 9 :
 int M,Z;
 cout<"enter the year you want to find list of retirement";
 cin>>M;
 ifstream f3("PAY.DAT",ios::binary);
 while(f2.read((char*)&T;sizeof(T)))
 if(T.Retirement()==M)
 {
    T.Display();
    p++
   }
f3.close();
cout<"NO. of employee retire"<<p<<endl;
break;


case 9 :
 cout<<"THE END: \t THANK YOU \n";
   {
    }


}
