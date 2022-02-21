#include<iostream>
#include<fstream>
using namespace std;
class myfile
{
    fstream f1,f2;
    char ch;
    public:
        void create()
        {
            f1.open("sample.txt",ios::out);
            cout<<"Enter Data For File:";
            while((ch=cin.get())!=EOF)
                f1.put(ch);
            f1.close();
        }
        void copyf()
        {
            f1.open("sample.txt",ios::in);
            f2.open("output.txt",ios::out);
            while((ch=f1.get())!=EOF)
                f2.put(ch);
            f1.close();
            f2.close();
        }
        void display()
        {
            f1.open("output.txt",ios::in);
            cout<<"COntents Of new File:";
            while((ch=f1.get())!=EOF)
                cout<<ch;
            f1.close();
        }
};
int main()
{
    myfile obj;
    obj.create();
    obj.copyf();
    obj.display();
    return 0;
}
