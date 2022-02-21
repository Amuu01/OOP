#include<iostream>
using namespace std;
class movie
{
    string actor_name;
    float length;
    float cost;
    public:

        movie(string name,float len,float c)
        {
            actor_name=name;
            length=len;
            cost=c;
        }
        void show()
        {
            cout<<"movie details"<<endl;
            cout<<"actor name  :"<<actor_name<<endl;
            cout<<"movie length:"<<length<<endl;
            cout<<"movie cost  :"<<cost<<endl;
        }
};
int main()
{
    float len,cos;
    string name;
    cout<<"enter actor name  :";
    getline(cin,name);
    cout<<"enter movie lenght in minutes:";
    cin>>len;
    cout<<"enter movie cost in rupees :";
    cin>>cos;
    movie m(name,len,cos);
    m.show();
    return 0;
}
