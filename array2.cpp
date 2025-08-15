#include<iostream>
using namespace std;
int main()
{
    int a[100],n,i,sum=0;
    cout<<"enter the limit"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\n enter the value";
        cin>>a[i];
        sum+=a[i];
    }
    cout<<"the sum is"<<sum;
    
    return 0;
}