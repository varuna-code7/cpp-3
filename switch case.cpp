#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter month in num(1-12):" << endl;
    cin >> m;
    switch (m)
    {
    case 1:
        cout << "jan" << endl;
        break;
    case 2:
        cout << "feb" << endl;
        break;
    case 3:
        cout << "march" << endl;
        break;
    case 4:
        cout << "april" << endl;
        break;
    case 5:
        cout << "may" << endl;
        break;
    case 6:
        cout << "june" << endl;
        break;
    case 7:
        cout << "july" << endl;
        break;
    case 8:
        cout << "aug" << endl;
        break;
    case 9:
        cout << "sep" << endl;
        break;
    case 10:
        cout << "october" << endl;
        break;
    case 11:
        cout << "november" << endl;
        break;
    case 12:
        cout << "december" << endl;
        break;
    default:
        cout<<"invalid month"<<endl;
        break;
    }

    return 0;
}