#include <iostream>
using namespace std;

main()
{
string name;
int rollno;
cout << "Enter the name of student"<<endl;
cin >> name;
cout << "Enter the roll number of student"<<endl;
cin >> rollno;
if(name == "Ali")
{
    if(rollno == 501)
    {
        cout << "Congratulations Ali on your admission at UET"<<endl;
    }
}
if(name == "Ali")
{
    if( rollno != 501)
    {
    cout << "We are sorry but your are not Ali"<<endl;
    }
}

}