
#include<iostream>
using namespace std;
template<class T>
class calc
{
    private:
        T num1,num2;
    public:
        calc(T n1,T n2)
        {
            num1=n1;
            num2=n2;
        }
         T add()
        {
            return num1+num2;
        }
        void display()
        {
            cout<<"N1:"<<num1<<endl;
            cout<<"N2:"<<num2<<endl;
            cout<<"Add:"<<add()<<endl;
        }

};
int main()
{
    calc<int>c1(2,1);
    calc<float>c2(2.4,1.2);
    c1.display();
    c2.display();

    return 0;
}
//templates enables genric programming
