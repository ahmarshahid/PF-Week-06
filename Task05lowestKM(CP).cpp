#include <iostream>
using namespace std;
float lowprice(string , int);

main()
{
int kilometers;
string time;
cout << "Enter milage"<<endl;
cin >> kilometers;
cout << "Enter the time"<<endl;
cin >> time;
float price = lowprice( time , kilometers);
cout << price << "Euro" << endl;

}
float lowprice(string time , int kilometers)
{

float result;
if (time == "day"  )
{
result = kilometers * 0.79 + 0.7;
}
if (time == "night")
{
result = kilometers * 0.90 + 0.7;
}
if( kilometers >=20 )
{
    result = kilometers * 0.09;
}
if ( kilometers >= 100)
{
    result = kilometers * 0.06;
}
return result;
}

