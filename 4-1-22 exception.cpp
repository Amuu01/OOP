#include<iostream>
using namespace std;
//exception handling
//syntax error,logical error, error runtime exception
//synchronous asynchronus
//sync out of range index ,overflow_error
//keyboard interrupt asyn
//try and catch
int main()
{
    int a=4,b=0;
    try
    {
        if(b!=0)
            cout<<a/b;
        else
            throw(b);
    }
    catch(int x)
    {
        cout<<"Divisible by Zero";
    }
    catch(...)  //catch all
    {
        cout<<"int division with zero denominator";
    }
    return 0;
}
