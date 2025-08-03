#include <iostream>
using namespace std;
int main()
{
    char marital, gender;
    int age;
    cout << "\nenter marital status:m as married |u as unmarried";
    cin >> marital;
    if (marital == 'm' || marital == 'M')
    {
        cout << "\n you are eligible";
    }
    else if (marital == 'u' || marital == 'U')
    {
        cout << "\nenter gender:m as male |f as feamle";
        cin >> gender;
        cout << "\nenter age";
        cin >> age;
        if ((gender == 'm' || gender == 'M') && age >= 30)
        {
            cout << "\n you are eligible";
        }
        else if ((gender == 'f' || gender == 'F') && age >= 25)
        {
            cout << "\n you are eligible";
        }
        else
        {
            cout << "\n invalid gender input";
            cout << "\n you are not eligible";
        }
        


        return 0;
    }
}    
