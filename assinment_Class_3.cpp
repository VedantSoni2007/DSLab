/*
write a C++ program to store the roll number of 5 students in an array and search for a given
roll no. Display student found if the roll no. is there and not found if not ?
*/

#include <iostream>

using namespace std;

int main()
{
    int roll_no[5];
    int search_roll, found = 0;

    cout << "Enter the 5 student roll numbers:\n";


    for (int i = 0; i < 5; i++)
    {
        cout << "Roll number " << i + 1 << ": ";
        cin >> roll_no[i];
    }


    cout << "\nEnter a roll number to search: ";
    cin >> search_roll;


    for (int i = 0; i < 5; i++)
    {
        if (roll_no[i] == search_roll)
        {
            found = 1;
            break; 
        }
    }


    if (found == 1)
    {
        cout << "Student found\n";
    }
    else
    {
        cout << "Student not found\n";
    }

    return 0;
}
