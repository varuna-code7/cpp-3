#include <iostream>
using namespace std;
int main()
{
    int a[25], n = 5, i, j,temp;
    for (i = 0; i < n; i++)
    {
        cout << "\nenter the value";
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i]<<endl;
    }

    return 0;
}