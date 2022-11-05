#include <iostream>
#include <string>
using namespace std;

class Rectangle
{
    double length, width;

public:
    Rectangle()
    {
        length = 0;
        width = 0;
    }
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    void getArea()
    {
        cout << "Area of Rectangle is :" << length * width << endl;
    }
};

int main()
{
    Rectangle a1(3, 3), a2(4, 4);

    cout << "\tBefore Assignment\n";
    a1.getArea();
    a2.getArea();

    cout << "\tAfter Assignment\n";
    a2 = a2;
    a1.getArea();
    a2.getArea();
}