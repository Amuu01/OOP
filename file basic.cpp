#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    int num;
    string name;
    ofstream o1;
    o1.open("abc.txt");
    o1<<1234;
    o1<<" ";
    o1<<"raju";
    o1.close();
    ifstream f1("abc.txt");
    f1>>num;
    f1>>name;
    cout<<"The Number is:"<<num<<endl;
    return 0;
}
