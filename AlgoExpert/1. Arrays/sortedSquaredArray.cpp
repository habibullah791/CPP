#include <iostream>
#include <string>
using namespace std;
#include <vector>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array)
{
    // Write your code here.
    vector<int> temp;
    for (int i = 0; i < array.size(); i++)
    {
        temp.push_back(array[i] * array[i]);
    }

    for (int i = 0; i < array.size(); i++)
    {
        for (int j = i+1; j < array.size(); j++)
        {
            if (temp[i] > temp[j])
            {
                int var = temp[i];
                temp[i] = temp[j];
                temp[j] = var;
            }
        }
    }

    "sorted array \n";
    for (size_t i = 0; i < temp.size(); i++)
    {
        cout<<temp [i] <<" ";
    }
    
    return {temp};
}

int main()
{
    // vector<int> array = {3, 6, 1};
    // sortedSquaredArray(array);

    int size = 5;
    int array[5] = {};

    // size = 10;
    // array[6] = 10;

    for (int i = 1; i < 10; i++)
    {
        array[i] = i;
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<"-- "<<array[i];
    }
    
}