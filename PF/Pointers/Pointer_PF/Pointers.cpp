#include <iostream>
using namespace std;
int main()
{
    int *ptr;
    const char* ptr2 = {"hello world"};
    // Explicitly initialize with nulptr
    int *number{nullptr};
    double *p_number{nullptr};

    int var = 3;
    ptr = &var;

    cout << "Pointer  " << *ptr2;

    return 0;
}