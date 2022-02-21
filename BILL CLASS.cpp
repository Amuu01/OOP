#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class market
{
	int itemcode,QTY;
	string item;
	float net_price,Value,total,gst;
	    inline float cal()
		{
			Value=(net_price*QTY);
			return Value;
		}
		
	public:
		void view();
		void entry();
		float get_total()
		{
			return total;
	    }
	    inline float tax()
		{
			if(net_price>0)
			{
				gst=(net_price*gst)*QTY;
				return gst;
			}
		}
};
void market::entry()
{
	cout<<"\tProduct Code:";
	cin>>itemcode;
	cin.ignore();
	cout<<"\tProduct Name:";
	getline(cin,item);
	cout<<"\tNet Price   :";
	cin>>net_price;
	cout<<"\tQuantity    :";
	cin>>QTY;
	cout<<"\tGst Rate    :";
	cin>>gst;
	cal();
	tax();
	total=Value+gst;
}
inline void market::view()
{
	cout<<endl<<"\t**PRODUCT DETAILS**"<<endl;
	cout<<"\t Product Code :"<<itemcode<<endl;
	cout<<"\t Product Name :"<<item<<endl;
	cout<<"\t Net Price    :"<<net_price<<endl;
	cout<<"\t Quantity     :"<<QTY<<endl;
	cout<<"\t Gross Amount :"<<Value<<endl;
	cout<<"\t AMOUNT AFTER ADDING GST"<<endl;
	cout<<"\t Total Amount :"<<total<<endl;
	cout<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
}

void cust()
{
	//Customer Details For Bill Generation
	string cname;
	double contact;
	cin.ignore();
	cout<<"CUSTOMER NAME    : ";
	getline(cin,cname);
	cout<<"CUSTOMER CONTACT : ";
	cin>>contact;
	
}
void discount(float sum)
{
	//If Bill amount>5000 calculating discount 
	if(sum>5000)
	{
		cout<<" TOTAL PAYABLE BILL AMOUNT : "<<sum<<endl;
		cout<<"-------------------------------------------"<<endl;
		cout<<"*** HurraY!!! 2% Discount Applied ***"<<endl;
		cout<<"-------------------------------------------"<<endl;
		sum=(sum-0.02*sum);
		cout<<" NEW PAYABLE AMOUNT AFTER DISCOUNT : "<<sum<<endl;
	}
	else
	{
		cout<<"---------------------------------------------"<<endl;
		cout<<" TOTAL PAYABLE BILL AMOUNT: "<<sum<<endl;
		cout<<"---------------------------------------------"<<endl;
	}
}
float order()
{
    int n;   //n is no items
	float sum=0;
	
	cout<<"\t!!!***XYZ SUPER MARKET BILLING SYSTEM***!!!"<<endl;
	cout<<endl<<"\tHow Many Items You Want to Purchase : ";
	cin>>n;
	cout<<"_________________________________________________"<<endl;
	market m[n];   //class objects
	
	for(int i=0;i<n;i++)
	m[i].entry();
	cout << "Thank You For Placing The Order!!!\n";
    //system("pause");
    cout<<endl;
	cout<<"\t\t!!!*************Invoice*************!!!\n"<<endl;
	cust();
	for(int i=0;i<n;i++)  //Calculating Total bill
	{
		m[i].view();
		sum+=m[i].get_total();
	}
	discount(sum); //Checking Discount
//	return sum;
}
void login()
{
	string username;int c;
	string password;
	cout<<"\t Input UserName : ";
	cin>>username;
	cout<<"\t Enter PassWord : ";
	cin>>password;
	if(username=="Admin")
	{
		if(password=="admin@")
		{
		    cout<<"\t Login As Admin Sucessful!!!"<<endl;
		    while(1)
		    {
		        system("cls");
				cout<<"\t1.Bill Generation"<<endl;
		        cout<<"\t2.Exit"<<endl;
		        cout<<"\tCHOOSE: ";
		        cin>>c;
		        switch(c)
		        {
		            case 1:order();
		                   break;
		            case 2:exit(0);
		            default:cout<<"***Wrong choice***";
		        }
		        system("pause");
		    }
		}
		else
		{
		    cout<<"\t Invalid PassWord"<<endl;
		}
	}	
	else if(username=="Admin1")
	{
	   if(password=="admin1")
	    {
		  cout<<"\t Login As Admin1 Sucessful!!!"<<endl;
		  while(1)
		  {
		        system("cls");
				cout<<"\t1.Bill Generation"<<endl;
		        cout<<"\t2.Exit"<<endl;
		        cout<<"\tCHOOSE: ";
		        cin>>c;
		        switch(c)
		        {
		            case 1:order();
		                   break;
		            case 2:exit(0);
		            default:cout<<"***Wrong choice***";
		        }
		        system("pause");
		   }
		 }
		 else
		{
		    cout<<"\t Invalid PassWord"<<endl;
		}
	}
	else
	cout<<"\t Invalid UserName"<<endl;
}

int main()
{
	
	int ch;
	while(1)
	{
	    system("cls");
	    cout<<"\t\t !!!***LOGIN SYSTEM***!!!"<<endl;
	    cout<<"Only Admin & Admin1 Have login access As of Now!"<<endl;
	    cout<<"\t 1.Login System."<<endl;
	    cout<<"\t 2.Exit"<<endl;
	    cout<<"\t Choose Your Option: ";
	    cin>>ch;
	    
	    switch(ch)
	    {
	        case 1:login();
	               break;
	        case 2:cout<<"Exiting!!!!";
	               exit(0);
	        default:cout<<"Invalid Choice...Try Again!!!"<<endl;
	    }
	    system("pause");
	}
	return 0;
}

