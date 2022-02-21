#include<iostream>
using namespace std;
class staff
{
	protected:
		int code;
		string name;
		int amt,exp;
	public:
	    staff()
	    {

	    }
	    void getdata()
		{
			cout<<"Enter code:";
			cin>>code;
			cin.ignore();
			cout<<"Enter Name:";
			getline(cin,name);
			cout<<"Enter amount to pay: ";
			cin>>amt;
			cout<<"Enter Experience: ";
			cin>>exp;
			cout<<endl;
		}

		virtual ~staff()
		{
            cout<<"\nTeaching Experience: "<<exp<<"\nPayable Amount: "<<amt;

		}
};
class master:public staff
{
	public:
	    master()
	    {
	    }

        ~master()
        {
            cout<<"To view details about Master";
            cout<<"\nName of master: "<<name<<"\ncode: "<<code;
        }

};
int main()
{
    staff *p=new master();
    p->getdata();
    delete p;
    return 0;
}
