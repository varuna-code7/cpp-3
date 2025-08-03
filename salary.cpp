#include <iostream>
using namespace std;
int main()
{
    float bs, gs, hra, da;
    cout << "enter the basic salary:" << endl;
    cin >> bs;
    if (bs < 1500)
    {
        hra = bs * 10 / 100;
        da = bs * 90 / 100;
    }
    else
    {
        hra = 500;
        da = bs * 98 / 100;
    }
    gs = bs + hra + da;
    cout << "\n basic salary" << bs;
    cout << "\n hra" << hra;
    cout << "\n da" << da;
    cout << "\n-------------";
    cout << "\n gross salary" << gs;
    return 0;
}