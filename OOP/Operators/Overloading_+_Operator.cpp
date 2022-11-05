#include <iostream>
#include <string>
using namespace std;

// base class
class Temp
{
    int one;
    int two;

public:
    Temp()
    {
        one = 0;
        two = 0;
    }
    Temp(int a, int b)
    {
        one = a;
        two = b;
    }

    Temp operator+(Temp obj)
    {
        Temp temp;

        temp.one = one + obj.one;
        temp.two = two + obj.two;

        return temp;
    }
    Temp operator-(Temp obj)
    {
        Temp temp;

        temp.one = one - obj.one;
        temp.two = two - obj.two;

        return temp;
    }
    void display()
    {
        cout << "a : " << one;
        cout << " b : " << two << endl;
    }
};

int main()
{
    Temp t1(11, 12), t2(4, 5);

    Temp t3 = t1 + t2;
    Temp t4 = t3 - t2;

    t1.display();
    t2.display();

    cout<<"-------------\n";
    t3.display();
    t4.display();
}