#include<iostream>
#include<string>
using namespace std;
class market
{
	int itemcode;
	string item;
	float net_price;
	int QTY;
	float Value,gst,total;
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
	cout<<endl<<"\t***PRODUCT DETAILS***"<<endl;
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
	int contact;
	cin.ignore();
	cout<<"CUSTOMER NAME    : ";
	getline(cin,cname);
	cout<<"CUSTOMER CONTACT : ";
	cin>>contact;
}
void discount(int sum)
{
	//If Bill amount>5000 calculating discount 
	if(sum>5000)
	{
		cout<<" TOTAL PAYABLE BILL AMOUNT : "<<sum<<endl;
		cout<<"-------------------------------------------"<<endl;
		cout<<"*** HurraY!!! 3% Discount Applied ***"<<endl;
		cout<<"-------------------------------------------"<<endl;
		sum=(sum-0.03*sum);
		cout<<" NEW PAYABLE AMOUNT AFTER DISCOUNT : "<<sum;
	}
	else
	{
		cout<<"---------------------------------------------"<<endl;
		cout<<" TOTAL PAYABLE BILL AMOUNT: "<<sum<<endl;
		cout<<"---------------------------------------------"<<endl;
	}
}
int main()
{
	int n;   //n is no items
	float sum;
	
	cout<<"\t!!!***XYZ SUPER MARKET BILLING SYSTEM***!!!"<<endl;
	cout<<endl<<"\tHow Many Items You Want to Purchase : ";
	cin>>n;
	cout<<"_________________________________________________"<<endl;
	market m[n];
	
	for(int i=0;i<n;i++)
	m[i].entry();
	
	cout<<endl;
	cout<<"\t\t!!!***Bill Generation***!!!\n"<<endl;
	cust();
	for(int i=0;i<n;i++)  //Calculating Total bill
	{
		m[i].view();
		sum+=m[i].get_total();
	}
	discount(sum); //Checking Discount
	return 0;
}
