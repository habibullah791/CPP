#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int width;
};

int main()
{

    Rectangle *pRect; // Pointer to Rectangle class
    Rectangle rect;  // Object of Rectangle class

    pRect = &rect;

    pRect->length = 10;
    pRect->width = 20;

    cout << "Length : " << pRect->length;
    cout << "\nWidth : " << pRect->width;

} // namespace std;
