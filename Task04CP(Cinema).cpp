#include <iostream>
using namespace std;
float totalincome(string, int, int);

main()
{
    while (1)
    {
        string type;
        int rows, columns;
        cout << "Enter the category of ticket : ";
        cin >> type;
        cout << "Enter the number of rows : ";
        cin >> rows;
        cout << "Enter the number of columns :";
        cin >> columns;
        float output;
        output = totalincome(type, rows, columns);
        cout << "The price of your tickets are : " << output << endl;
    }
}
float totalincome(string type, int rows, int columns)
{
    int seats = rows * columns;
    float totalprice;
    if (type == "premier")
    {
        totalprice = seats * 12.00;
    }
    if (type == "normal")
    {
        totalprice = seats * 7.50;
    }
    if (type == "discount")
    {
        totalprice = seats * 5.00;
    }
    return totalprice;
}