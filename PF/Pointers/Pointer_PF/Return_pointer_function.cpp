#include <iostream>
using namespace std;

int *getRandomNumber(int);

int main()
{
    int number;
    int *array;

    cout << "How Much random numbers : ";
    cin >> number;

    array = getRandomNumber(number);

    for (int i = 0; i < number; i++)
    {
        cout << "Numbers are :" << array[i] << endl;
    }

    delete[] array;
    array = 0;
}

// Functon returning pointer
int *getRandomNumber(int number)
{

    if (number < 0)
    {
        return 0;
    }
    else
    {
        int *array = new int[number];

        for (int i = 0; i < number; i++)
        {
            array[i] = rand();
        }
        return array;
    }
}