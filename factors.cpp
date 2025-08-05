#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"\n enter n";
     cin>>n;
      for(int i=1;i<=n;i++)
      {
        if(n%i==0)
          cout<<"factors are"<<i<<endl;
      }     
    return 0;
}