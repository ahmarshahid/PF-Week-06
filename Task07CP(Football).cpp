#include <iostream>
using namespace std;
float checkprice(float, string, int);

main()
{
    float budget;
    string category;
    int peoples;
    cout << "Enter the budget : ";
    cin >> budget;
    cout << "Enter the category : ";
    cin >> category;
    cout << "Enter the number of people : ";
    cin >> peoples;
    float output = checkprice(budget, category, peoples);
    if (output >= 0)
    {
        cout << "Yes! you have " << output << " left ";
    }
    else if (output < 0)
    {
        output = -1 * output;
        cout << " Not enough money! you need " << output << "QR";
    }
}
float checkprice(float budget, string category, int peoples)
{
    float priceleft, budgetleft;
    if (peoples >= 1 && peoples <= 4)
    {
        budgetleft = budget - budget * 0.75;
        if (category == "vip")
        {
            priceleft = budgetleft - peoples * 499.99;
        }
        else if (category == "normal")
        {
            priceleft = budgetleft - peoples * 249.99;
        }
    }
    if (peoples >= 5 && peoples <= 9)
    {
        budgetleft = budget - budget * 0.60;
        if (category == "vip")
        {
            priceleft = budgetleft - peoples * 499.99;
        }
        else if (category == "normal")
        {
            priceleft = budgetleft - peoples * 249.99;
        }
    }
    if (peoples >= 10 && peoples <= 24)
    {
        budgetleft = budget - budget * 0.5;
        if (category == "vip")
        {
            priceleft = budgetleft - peoples * 499.99;
        }
        else if (category == "normal")
        {
            priceleft = budgetleft - peoples * 249.99;
        }
    }
    if (peoples >= 25 && peoples <= 49)
    {
        budgetleft = budget - budget * 0.4;
        if (category == "vip")
        {
            priceleft = budgetleft - peoples * 499.99;
        }
        else if (category == "normal")
        {
            priceleft = budgetleft - peoples * 249.99;
        }
    }
    if (peoples > 50)
    {
        budgetleft = budget - budget * 0.60;
        if (category == "vip")
        {
            priceleft = budgetleft - peoples * 499.99;
        }
        else if (category == "normal")
        {
            priceleft = budgetleft - peoples * 249.99;
        }
    }

    return priceleft;
}