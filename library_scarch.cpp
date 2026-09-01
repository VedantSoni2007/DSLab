#include <iostream>
using namespace std;

int main()
{
    int book[5];
    int searchID;

    cout << "Enter 5 Book IDs\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "Book id " << i + 1 << ": ";
        cin >> book[i];
    }

    cout << "Enter the Book ID to Search: ";
    cin >> searchID;

    for (int i = 0; i < 5; i++)
    {
        if (book[i] == searchID)
        {
            cout << "Book Found";
            return 0;
        }
    }

    cout << "Book not found";

    return 0;
}
