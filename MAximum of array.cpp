#include<iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"Enter Size of array:";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    cin>>arr[i];
    int max=arr[0];
    for(i=1;i<n;i++)
    {
       if(arr[i]>max)
       max=arr[i];
    }
    cout<<"Maximum=:"<<max;
    return 0;
}


