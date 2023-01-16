
#include <iostream>
using namespace std;
main()
{
    while (1)
    {
        int cost;
        string brand;
        cout << "Enter the cost" << endl;
        cin >> cost;
        cout << "Enter the name of the brand" << endl;
        cin >> brand;
        if (cost <= 1500)
        {
            if (brand == "MTJ")
            {
                cout << "Yes! You can buy the dress" << endl;
            }
        }
        if (cost < 1500)
        {
            if (brand != "MTJ")
                cout << "Sorry you can't buy the dress" << endl;
        }
    }
}