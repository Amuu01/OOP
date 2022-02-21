#include<iostream>
using namespace std;
template<class T>
T FindMax(T a,T b)
{
    return (a>b?a:b);
}
int main()
{
    int i=50,j=60,k;
    float l=10.4,m=12.2,n;
    k=FindMax<int>(i,j);
    n=FindMax<float>(l,m);
    cout<<k<<endl;
    cout<<n<<endl;
    return 0;

}
