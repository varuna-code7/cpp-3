#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"enter n:"<<endl;
    cin>>n;
    do
    {
        if(i%2==0)
           cout<<"even number:"<<i<<endl;
           i++;
    }while(i<=n);       
}
    