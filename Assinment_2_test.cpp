#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    int Roll_Number;
    string Name;
    string Exam_Qualified;
    string Mobile_Number;
    int k;

public:
    void info()
    {
        cout << "Enter Your name" << " :\n";
        cin >> Name;

        cout << "Enter Your Phone number" << " :\n";
        cin >> Mobile_Number;

        cout << "Enter Your Roll number" << " :\n";
        cin >> Roll_Number;

        cout << "Enter Your Exam Qualified! " << " :\n";
        cin >> Exam_Qualified;

        cout << "__________________\n";
    }

    void display()
    {
        cout << "ROLL NO:" << Roll_Number << "\n";

        cout << "Name:" << Name << "\n";

        cout << "Mobile Number:" << Mobile_Number << "\n";

        cout << "Exam Qualified:" << Exam_Qualified << "\n";
    }

    void option()
    {
        cout << "\n \n \n";
        cout << "========Select Options========" << "\n \n ";

        cout << "1.Add New Student Record" << "\n";
        cout << "2.Display Student Record" << "\n";
        cout << "3.Search Student Record by roll no." << "\n";
        cout << "4.EXIT" << "\n";
        cout << "Enter Your Choice ?" << "\n";

        cin >> k;
    }

    int getChoice()
    {
        return k;
    }
};

int main()
{
    student s1;
    s1.option();

    if (s1.getChoice() == 1)
    {
        student s1;
        cout << "========Student Information========" << "\n";
        s1.info();
        s1.display();
        s1.option();
    }

    else if (s1.getChoice() == 2)
    {
        student s1;
        cout << "========Student Records========" << "\n \n ";
        s1.display();
        s1.option();
    }

    else if (s1.getChoice() == 3)
    {
    }

    else if (s1.getChoice() == 4)
    {
        cout << "Thank you..";
    }

    return 0;
}