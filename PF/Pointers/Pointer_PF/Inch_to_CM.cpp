#include <iostream>
#include <iomanip>
using namespace std;

// Write your function prototype here.
void convert(double *length);
int main()
{
    double measurement;
    cout << "Enter a length in inches, and I will convert\n";
    cout << "it to centimeters: ";
    cin >> measurement;
    convert(&measurement);
    cout << setprecision(4);
    cout << fixed << showpoint;
    cout << "Value in centimeters: " << measurement << endl;
    return 0;
}
//
// Write the function convert here.
//
void convert(double *length)
{

    if (length < 0)
    {
        *length = 0;
    }
    else
    {
        *length = *length * 2.54;
    }
}