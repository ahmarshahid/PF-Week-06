#include <iostream>
using namespace std;

main()
{
    int price;
    string brand;
    cout << "Enter the price" << endl;
    cin >> price;
    cout << "Enter the brand" << endl;
    cin >> brand;
    if (price < 1500)
    {
        if (brand == "MTJ")
        {
            cout << "Yes we can buy it !";
        }
    }
}
