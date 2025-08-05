#include <iostream>
using namespace std;
int main()
{
    int n, i=1;
    cout << "enter the limit";
    cin >> n;
    while (i <= n)
    {
        if (i % 5 == 0)
        {
            cout << "this is divisible by 5:" << i<<endl;
        }
        i++;
    }
    return 0;
}