#include <iostream>
#include <string>
using namespace std;

/*
   Student Line Up
   This program finds which student will be
   at the front and end of the line alphabetically.
*/

int main()
{
    // Program Design:
    // 1. Ask for number of students.
    // 2. Make sure the number is valid.
    // 3. Read each student's name.
    // 4. Compare names to find first and last.
    // 5. Display the results.

    int numStudents;
    string name;
    string firstName, lastName;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    while (numStudents < 1 || numStudents > 25)
    {
        cout << "Please enter a number from 1 to 25: ";
        cin >> numStudents;
    }

    cout << "Enter student name #1: ";
    cin >> name;

    firstName = name;
    lastName = name;

    for (int i = 2; i <= numStudents; i++)
    {
        cout << "Enter student name #" << i << ": ";
        cin >> name;

        if (name < firstName)
            firstName = name;

        if (name > lastName)
            lastName = name;
    }

    cout << endl;
    cout << "Student at the front of the line: " << firstName << endl;
    cout << "Student at the end of the line: " << lastName << endl;

    return 0;
}