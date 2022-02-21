#include<iostream>
using namespace std;
class patient
{
    protected:
    string name;
    int age;
    public:
        void getdata()
        {
            cout<<"patient name:";
            cin.ignore();
            cin>>name;
            cout<<"patient age:";
            cin>>age;
        }
};
class pay
{
    protected:
    int nod,perday;
    public:
        void getpay()
        {
            cout<<"no of days:";
            cin>>nod;
            cout<<"per day charge:";
            cin>>perday;
        }
};
class cal:public patient,public pay
{
    float total,amnt;
    public:
         void amt()
        {
            total=total+(nod*perday);
            cout<<"total amount:"<<total<<endl;
        }
        void paid()
        {
            cout<<endl<<"amount paid:";
            cin>>amnt;
            total=total-amnt;

        }
        void show()
        {
            cout<<endl;
            cout<<"patient name:"<<name<<endl;
            cout<<"patient age:"<<age<<endl;
            cout<<"no of days:"<<nod<<endl;
            cout<<"per day charge:"<<perday<<endl;
            cout<<"balance amount:"<<total<<endl;

        }

};
int main()
{
    cal c1;
    c1.getdata();
    c1.getpay();
    c1.amt();
    c1.paid();
    c1.show();
    return 0;
}
