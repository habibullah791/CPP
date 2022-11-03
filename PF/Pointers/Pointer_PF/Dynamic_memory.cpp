#include<iostream>
using namespace std;

int main()
{
    int* array = new int[5];
    
    for (int i = 0; i < 5; i++)
    {
        array[i] = i*i;
    }
    
    for (int i = 0; i < 5; i++)
    {
       cout<<"Array [] : "<< array[i]<<"\n";
    }

    delete [] array;
    array = 0;
    
}