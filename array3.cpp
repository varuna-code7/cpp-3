#include<iostream>
using namespace std;
int main()
{
    int a[20],n=5,i,t;
    for(i=0;i<n;i++)
    {
        cout<<"enter the value";
        cin>>a[i];
    }
    t=a[0];
    for(i=1;i<n;i++)
    {
    if(t<a[i])
    {
        t=a[i];
    }
    }
    cout<<"\nthe greatest num in array is"<<t;
    return 0;
}    