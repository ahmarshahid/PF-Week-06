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
        cout << "Enter the day :" << endl;
        cin >> day;
        cout << " Enter the month :" << endl;
        cin >> month;
        cout << "Enter price :" << endl;
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
        return payable;
    }

    else if (day != "sunday" && month == "october")
    {
        payable = price;
        return payable;
    }
    else if (day == "sunday" && month != "october")
    {
        payable = price - price*0.05;
        return payable;
    }
}