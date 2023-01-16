#include <iostream>
using namespace std;

string checkspeed(float);
main()
{
    while(1)
    {
    float speed;
    cout << "Enter your speed : ";
    cin >> speed;
    string output;
    output = checkspeed(speed);
    cout << "You are " << output << endl;
}
}
string checkspeed(float speed)
{
    string result;
    if (speed <= 10)
    {
        result = "Slow";
        
    }
    if (speed > 10 && speed <= 50)
    {
        result = "Average";
        
    }
    if (speed > 50 && speed <= 150)
    {
        result = "Fast";
        
    }
    if (speed > 150 && speed <= 1000)
    {
        result = "UltraFast";
        
    }
    if (speed>1000)
    {
        result = "Extremelyfast";
        
    }
    return result;
    
}