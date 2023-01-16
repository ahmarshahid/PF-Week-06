#include <iostream>
using namespace std;
main()
{
    string friendsgoing;
    string lecture;
    cout << "Are your friends coming to university ?" << endl;
    cin >> friendsgoing;
    cout << "Do you have lectures today ?" << endl;
    cin >> lecture;
    if (friendsgoing == "yes")
    {
        if (lecture == "yes")
        {
            cout << "YES I'm going to university"<<endl;
        }
    }
}