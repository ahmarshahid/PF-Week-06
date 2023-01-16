#include <iostream>
using namespace std;
char gradecalculator(int);
main()
{
    while (1)
    {
        int marks;
        cout << "Enter the marks :" << endl;
        cin >> marks;
        cout << "your grade is :" << gradecalculator(marks) << endl;
    }
}

char gradecalculator(int marks)
{
    char grade;

    if (marks <= 50)
    {
        grade = 'F';
    }
    else if (marks > 51 && marks <= 60)
    {
        grade = 'E';
    }
    else if (marks > 60 && marks <= 70)
    {
        grade = 'D';
    }
    else if (marks > 70 && marks <= 80)
    {
        grade = 'C';
    }
    else if (marks > 80 && marks <= 85)
    {
        grade = 'B';
    }
    else if (marks > 85)
    {
        grade = 'A';
    }
    return grade;
}
