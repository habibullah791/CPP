#include <iostream>
#include <string>
using namespace std;

// Abstract class
class askForPromotion
{
    // Putre Virtual Function
    virtual void Promotion() = 0;
};

// Employee Class
class Employee : askForPromotion
{
    string Name;
    string Address;
    int Age;

public:
    // No value constructor
    Employee()
    {
        Name = "";
        Address = "";
        Age = 0;
    }

    // valued constructor
    Employee(string name, string address, int age)
    {
        Name = name;
        Address = address;
        Age = age;
    }

    // Setter
    void setName(string name)
    {
        Name = name;
    }
    void setAddress(string address)
    {
        Address = address;
    }
    void setAge(int age)
    {
        Age = age;
    }

    // Getter
    string getName()
    {
        return Name;
    }
    string getAddres()
    {
        return Address;
    }
    int getAge()
    {
        return Age;
    }

    // Methods
    void printInfo()
    {
        cout << getName() << " Age is " << getAge() << endl;
    }

    // Overriden Function of Abstract class
    void Promotion()
    {
        if (Age < 25)
        {
            cout << "You're Not  Getting the promotion " << endl;
        }
        else
            cout << "You're Getting the promotion " << endl;
    }
};

// Inhereting the base class(Employee Class) as public so that we can access its metods
class Developer : public Employee
{
public:
    string FavProgLang;

    Developer(string name, string address, int age, string favProgLang) : Employee(name, address, age)
    {
        FavProgLang = favProgLang;
    }

    void fixBugg()
    {
        cout << getName() << " is Fixing Buggs in " << FavProgLang << endl;
    }
};
int main()
{
    // Employee e1 = Employee("Habib", "Phalia", 23);
    // e1.printInfo();
    // e1.setName("Junaid");
    // e1.printInfo();

    Developer d = Developer("habib", "palia", 33, "c++");
    d.printInfo();
    d.Promotion();
    d.fixBugg();
}