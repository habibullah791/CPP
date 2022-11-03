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
protected:
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

    // this Virtual function will first check that if there is anny implementation of 
    // his function in the derived class or not
    // if there is then it will use the implementation of derived class
    // if there is not then it will use the implementation of base class
    virtual void work()
    {
        cout << Name << " is working Don't disturb ..." << endl;
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
    void work()
    {
        cout << Name << " is coding in " << FavProgLang << endl;
    }
};
int main()
{
    Developer d = Developer("habib", "palia", 33, "c++");

    Employee *e1 = &d;
    e1->work();
}