
#include <iostream>
using namespace std;

void displayValues(const int *const numbers, int size)
{
    // Display all the values.
    for (int count = 0; count < size; count++)
    {
        cout << *(numbers + count) << " ";
    }
    cout << endl;
}

int main()
{
    const int SIZE = 5;
    int array[5] = {1, 2, 3, 4, 5};

    displayValues(array, SIZE);
}