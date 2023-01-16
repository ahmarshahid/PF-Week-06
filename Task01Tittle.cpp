#include <iostream>
using namespace std;
string checktitle(float, char);

main()
{
    while (1)
    {

        float age;
        char gender;
        cout << "Enter the age : ";
        cin >> age;
        cout << "Enter the gender : ";
        cin >> gender;
        string result;
        result = checktitle(age, gender);
        cout << "Your tittle is : " << result << endl;
    }
}
string checktitle(float age, char gender)
{
    string tittle;
    if (age >= 16 && gender == 'm')
    {
        tittle = "Mr.";
    }
    if (age < 16 && gender == 'm')
    {
        tittle = "Master";
    }
    if (age >= 16 && gender == 'f')
    {
        tittle = "Ms.";
    }
    if (age < 16 && gender == 'f')
    {
        tittle = "Miss";
    }
    return tittle;
}