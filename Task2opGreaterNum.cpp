#include <iostream>
using namespace std;

main()
{
int number1;
int number2;
int number3;
cout << "Enter the 1st number"<<endl;
cin >> number1;
cout << "Enter the 2nd number"<<endl;
cin >> number2;
cout << "Enter the 3rd number"<<endl;
cin >> number3;
if (number1 > number2 && number1 > number3)
{
    cout << "The Greatest number is "<< number1 << endl;
}
if (number2 > number1 && number2 > number3)
{
    cout << "The Greatest number is "<< number2 << endl;
}
if (number3 > number1 && number3 > number2)
{
    cout << "The Greatest number is " << number3 << endl;
}

}