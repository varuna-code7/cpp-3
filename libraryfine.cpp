#include<iostream>
using namespace std;
int main()
{
    int days;
    cout<<"enter the days";
    cin>>days;
    if(days<=5)
    {
        cout<<"\npay fine : 0.50";
        cout<<"\ntotal fine amount :"<<days*0.5;
    }
    else if (days>=6 && days<=10)
    {
         cout<<"\npay fine : 1";
        cout<<"\ntotal fine amount :"<<days*1;
    }
    else if( days>10 && days<=30)
    {
        cout<<"\npay fine : 5";
        cout<<"\ntotal fine amount :"<<days*5;
    }
    else
    {

        cout<<"\n your membership is cancelled";
    
    }

    


    return 0;
}