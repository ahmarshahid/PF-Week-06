#include <iostream>
using namespace std;
float discount(string, string, float);

main()
{
    while (1)
    {
        string day;
        string month;
        float price;
        cout << "Enter the day :";
        cin >> day;
        cout << " Enter the month :";
        cin >> month;
        cout << "Enter price :";
        cin >> price;
        float finalprice = discount(day, month, price);
        cout << " This is final price :" << finalprice << endl;
    }
}
float discount(string day, string month, float price)
{
    float payable;

    if (day == "sunday" && month == "october")
    {
        payable = price - price * 0.1;
    }
    if (day == "sunday" && month == "march")
    {
        payable = price - price * 0.1;
    }
    if (day == "sunday" && month == "august")
    {
        payable = price - price * 0.1;
    }
    if (day != "sunday" && month == "october")
    {
        payable = price;
    }
    if (day == "monday" && month == "november")
    {
        payable = price - price * 0.05;
    }
    if (day == "monday" && month == "december")
    {
        payable = price - price * 0.05;
    }
    return payable;
}
