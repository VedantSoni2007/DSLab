/*
write a C++ program to display the student marks in arrayand arrange them
in decending order to display the student from higest marks to lowest marks ??
*/

#include <iostream>
using namespace std;
int main()
{

    int Marks[5];

    cout << "Enter The Marks of 5 Student\n\n ";
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter " << i + 1 << " marks:  ";
        cin >> Marks[i];
        cout << "\n";
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << i + 1;
        cout << Marks[i];
        cout << "\n";
    }

    return 0;
}