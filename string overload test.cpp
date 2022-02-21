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
        int operator==(cmp obj)
        {
            for(int i=0;arr[i]!='\0'||obj.arr[i]!='\0';i++)
            {
                if(arr[i]!=obj.arr[i])
                    return(arr[i]-obj.arr[i]);
               return (arr[i]-obj.arr[i]);
            }
        }
};
int main()
{

    cmp cp1,cp2;
    cp1.get_string();
    cp2.get_string();
    int x=(cp1==cp2);
    if(x==0)
        cout<<"Same string";
    else
        cout<<"Diffrent string";
    return 0;
}
