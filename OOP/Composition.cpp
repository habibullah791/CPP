#include <iostream>
#include <string>
using namespace std;

class DateOfBirth
{
    int day, month, year;

public:
    DateOfBirth()
    {
        day = 0;
        month = 0;
        year = 0;
    }
    DateOfBirth(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    void display()
    {
        cout << year << "/" << month << "/" << day << endl;
    }
};

class Person
{
    string Name;
    DateOfBirth DOB;

public:
    Person(string name, int d, int m, int y) : DOB(d, m, y)
    {
        Name = name;
    }

    void displayInfo()
    {
        cout << Name << " DOB is ";
        DOB.display();
    }
};

int main()
{
    Person p1 = Person("Habib", 25, 02, 1999);

    // system("PAUSE");
    p1.displayInfo();
}