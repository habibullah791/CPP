#include <vector>
#include <iostream>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum)
{
    for (int i = 0; i < array.size(); i++)
    {
        int firstNum = array[i];
        for (int j = i + 1; j < array.size(); j++)
        {
            int secondNum = array[j];
            if (firstNum + secondNum == targetSum)
            {
                return vector<int>{firstNum, secondNum};
            }
        }
    }
    return {};
}

int main()
{
    // create a vector array
    vector<int> array = {3, 5, -4, 8, 11, 1, -1, 6};
    int targetSum = 10;

    twoNumberSum(array, targetSum);
}