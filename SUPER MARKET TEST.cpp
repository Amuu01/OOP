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
			//cout<<"Total Amount:"<<Value;
			return Value;
		}
	public:
		void view();
		void entry();
	    inline float tax()
		{
			if(net_price>0)
			{
				//gst=0.05;
				gst=(net_price*gst)*QTY;
				return gst;
			}
			/*if(net_price>1501 || net_price<=2500)
			{
				//gst=0.12;
				gst=(net_price*gst)*QTY;
				return gst;
			}
			if(net_price>2501 || net_price<3500)
			{
				//gst=0.18;
				gst=(net_price*gst)*QTY;
				return gst;
			}
			else if(net_price>4000)
			{
				//gst=0.28;
				gst=(net_price*gst)*QTY;
				return gst;
		   }*/
		}
};
inline void market::view()
{
	total=Value+gst;
	cout<<endl<<"\t***ITEM DETAILS***"<<endl;
	cout<<"\tItem Code :"<<itemcode<<endl;
	cout<<"\tItem Name :"<<item<<endl;
	cout<<"\tNet Price :"<<net_price<<endl;
	cout<<"\tQuantity :"<<QTY<<endl;
	cout<<"\tGross Amount :"<<Value<<endl;
	cout<<"\tTotal Amount:"<<total;
}
void market::entry()
{
	cout<<"\tItem Code:";
	cin>>itemcode;
	cin.ignore();
	cout<<"\tItem Name:";
	getline(cin,item);
	cout<<"\tNet Price:";
	cin>>net_price;
	cout<<"\tQTY:";
	cin>>QTY;
	cout<<"\tGst Rate:";
	cin>>gst;
	cal();
	tax();
}
int main()
{
	int n;
	cout<<"\t!!!***SUPER MARKET BILLING SYSTEM***!!!"<<endl;
	cout<<endl<<"\tEnter No of Items:";
	cin>>n;
	market m[n];
	for(int i=0;i<n;i++)
	m[i].entry();
	cout<<"\t\t!!!***Bill Generation***!!!";
	for(int i=0;i<n;i++)
	{
		m[i].view();
	}
	return 0;
}
