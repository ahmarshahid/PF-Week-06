#include <iostream>
using namespace std;
main()
{
    while (1)
    {
        int num1;
        int num2;
        cout << "Enter the 1st number :";
        cin >> num1;
        cout << "Enter the 2nd number :";
        cin >> num2;
        if (num1 > num2)
        {
            cout << num1 << " is the gretest number" << endl;
        }
        else
        {
            cout << num2 << " is greatest number" << endl;
        }
    }
}