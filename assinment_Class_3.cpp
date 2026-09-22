/*
write a C++ program to store the roll number of 5 students in an array and search for a given
roll no. Display student found if the roll no. is there and not found if not ?
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{

    int roll_no[5];

    cout << "Enthe the 5 student roll number :" << "\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "Roll number " << i + 1 << "\n";
        cin >> roll_no[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ")" << "is";

        cout << roll_no[i] << " ";

        cout << "\n";
    }
    return 0;
}