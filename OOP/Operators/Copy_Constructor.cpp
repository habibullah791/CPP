#include <iostream>
#include <string>
using namespace std;

// A copy constructor is a special constructor that is called whenever a new
// object is created and initialized with the data of another object of the
// same class.

// Base class
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

    Rectangle(Rectangle &obj){
        cout<<"Called\n";
        length = obj.length*2;
        width = obj.width*2;
    }


    void getArea()
    {
        cout << "Area of Rectangle is :" << length * width << endl;
    }
};

int main()
{
    //                  It will trigger copy Constructor    
    Rectangle a1(3, 3), a2(a1) ;

    cout << "\tBefore Assignment\n";
    a1.getArea();
    a2.getArea();
}
