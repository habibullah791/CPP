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
        setAge(33);
    }
};

int main()
{
    Employee e1 = Employee("Habib", "Phalia", 23);

    e1.printInfo();
    e1.Promotion();
    e1.printInfo();
}