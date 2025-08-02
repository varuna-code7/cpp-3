#include<iostream>
using namespace std;
int main()
{
    string x,y;
    cout<<"enter x and y"<<endl;
    cin>>x>>y;
    x.swap(y);
    cout<<"after swapping x"<<x;
    cout<<"after swapping y"<<y;
    return 0;
}    
