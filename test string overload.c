#include<string.h>
#include<iostream>
using namespace std;

class cmp
{
    string arr;
    public:
        void get_string()
        {
            cout<<"Enter any string:";
            getline(cin,arr);
        }
        int operator==(cmp obj,cmp obj2)
        {
            if(strcmp(obj.arr,obj2.arr)==0)
                return 1;
            else
            {
                cout<<"String Is Not Equal";
                return 0;
            }
        }
};
int main()
{

    cmp cp1,cp2;
    cp1.get_string();
    cp2.get_string();
    if(cp1==cp2)
        cout<<"String Is Equal";
    /*int x=(cp1==cp2);
    if(x==0)
        cout<<"Same string";
    else
        cout<<"Diffrent string";*/
    return 0;
}
