#include<iostream>
using namespace std;
int main()
{
    int n,i,t;
    cout<<"enter n:"<<endl;
    cin>>n;
    cout<<"enter t:"<<endl;
    cin>>t;
    for(i=1;i<=n;i++)
        cout<<t<<"*"<<i<<"="<<t*i<<endl;
    return 0;
}    