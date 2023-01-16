#include <iostream>
using namespace std;
int playtime ( string , int, int);


main()
{
string type;
int totalholidays;
int sofians;
cout << "Enter the type of year : ";
cin >> type;
cout << "Enter the total holidays : ";
cin >> totalholidays;
cout << "Enter the total weekends : ";
cin >> sofians;
int output;
output = playtime(type, totalholidays, sofians);
cout << output << endl;
}
int playtime ( string type , int totalholidays, int sofians)
{
int nonsofia;
float nonsofiaplaytime;
float holidaysplaytime;
float playtime;
nonsofia = 48 - sofians;
nonsofiaplaytime = nonsofia*0.75;
holidaysplaytime = totalholidays*0.66;
playtime = sofians + nonsofiaplaytime +holidaysplaytime;
if (type == "normal")
{
return playtime;
}
if( type == "leap")
{
    playtime = playtime + playtime*0.15;
    return playtime;
}
}