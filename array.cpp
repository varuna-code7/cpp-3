#include <iostream>
using namespace std;

int main()
{

    int a[5] = {1, 2, 3};
    int b[] = {10, 20};

    cout << "Array a elements:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    cout << "Array b elements:" << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "b[" << i << "] = " << b[i] << endl;
    }

    int countA = sizeof(a) / sizeof(a[0]);
    cout << "Total elements in array a: " << countA << endl;

    return 0;
}
