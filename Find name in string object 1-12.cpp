
#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    string s[4],str;
    cout<<"Enter Elements of string: "<<endl;
    for(int i=0;i<4;i++)
    cin>>s[i];
    
    cout<<"****************\n";
    for(int i=0;i<4;i++)
    cout<<s[i]<<endl;
    
    cout<<"Enter Name to search: ";
    cin>>str;
    for(int i=0;i<4;i++)
    {
        if(s[i]==str)
        {
            cout<<"Name found at position:"<<i+1;
            break;
        }
    }
   

    return 0;
}

