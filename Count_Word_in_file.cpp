#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    fstream f1;
    f1.open("temp.txt");
    int count=0;
    char c[20],ch[20];
    cout<<"Enter Word to count:";
    gets(c);
    while(f1)
    {
        f1>>ch;
        if(strcmp(ch,c)==0)
            count++;
    }
    cout<<"Occurence="<<count<<endl;
    f1.close();
    return 0;
}
