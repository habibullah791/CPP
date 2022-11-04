#include <iostream>
#include <string>
using namespace std;

// Employee Class
class Employee
{
protected:
    string Name;
    string Address;
    double Salary;
    int Age;

public:
    Employee()
    {
        Name = "";
        Address = "";
        Salary = 0;
        Age = 0;
        cout << "Employee Constructor\n";
    }
    Employee(string name, string address, double salary, int age)
    {
        Name = name;
        Address = address;
        Salary = salary;
        Age = age;
        cout << "Employee Valued Constructor\n";
    }
};
class Assistant : public Employee
{
protected:
    string WorkOutOfBox;

public:
    Assistant()
    {
        WorkOutOfBox = "";
        cout << "Assistant Constructor\n";
    }
    Assistant(string name, string address, double salary, int age, string workOutOfBox) : Employee(name, address, salary, age)
    {
        WorkOutOfBox = workOutOfBox;
        cout << "Assistant Valued Constructor\n";
    }
};

class Programmer : public Assistant
{
    string FavProgLang;

public:
    Programmer(string name, string address, double salary, int age, string workOutOfBox, string favProgLang)
        : Assistant(name, address, salary, age, workOutOfBox)
    {
        FavProgLang = favProgLang;
        cout << "pROGRAMMER Valued Constructor\n";
    }

    void displayInfo()
    {
        cout << Name << " lives in " << Address << endl;
        cout << Name << " is " << Age << " years Old" << endl;
        cout << Name << " can do " << WorkOutOfBox << " and "
             << "Love to work in " << FavProgLang << endl;
    }
};
int main()
{
    Programmer p1 = Programmer("Habib", "M.B.DIN", 300, 24, "Boxing", "React");

    p1.displayInfo();
}