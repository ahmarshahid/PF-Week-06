#include <iostream>
using namespace std;
main()
{
    while (1)
    {
        int num1;
        int num2;
        int num3;
        cout << "Enter the first number" << endl;
        cin >> num1;
        cout << "Enter the second number" << endl;
        cin >> num2;
        cout << "Enter the third number" << endl;
        cin >> num3;

        if (num1 > num2)
        {
            if (num1 > num3)
            {
                cout << "The greatest number is :" << num1 << endl;
            }
        }
        if (num2 > num1)
        {
            if (num2 > num3)
            {
                cout << "The greatest number is :" << num2 << endl;
            }
        }
        if (num3 > num1)
        {
            if (num3 > num2)
            {
                cout << " The greatest number is :" << num3 << endl;
            }
        }
    }
}