#include <vector>
#include <iostream>
using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence)
{
    // Write your code here.
    int iterate = 0;
    int count = 0;
    for (int i = 0; i < sequence.size(); i++)
    {
        for (int j = iterate; j < array.size(); j++)
        {
            if (sequence[i] == array[j])
            {
                iterate = j+1;
                count++;
                break;
                ;
            }
        }
    }

    return (count == sequence.size());
}

int main()
{
    // create a vector array
    vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
    vector<int> sequence = {22,  25, 6};

    bool isValid = isValidSubsequence(array, sequence);

    if (isValid == true)
    {
        cout << "Valid Sequence";
    }
    else
    {
        cout << "InValid Sequence";
    }
}

// TEST CASES
// {
//   "array": [5, 1, 22, 25, 6, -1, 8, 10],
//   "sequence": [1, 6, -1, 10]
// }
// Test Case 2
// {
//   "array": [5, 1, 22, 25, 6, -1, 8, 10],
//   "sequence": [5, 1, 22, 25, 6, -1, 8, 10]
// }
// Test Case 3
// {
//   "array": [5, 1, 22, 25, 6, -1, 8, 10],
//   "sequence": [5, 1, 22, 6, -1, 8, 10]
// }
// Test Case 4
// {
//   "array": [5, 1, 22, 25, 6, -1, 8, 10],
//   "sequence": [22, 25, 6]
// }
// Test Case 5
// {
//   "array": [5, 1, 22, 25, 6, -1, 8, 10],
//   "sequence": [1, 6, 10]
// }
// Test Case 6
// {
//   "array": [5, 1, 22, 25, 6, -1, 8, 10],
//   "sequence": [5, 1, 22, 10]
// }
// Test Case 7
// {
//   "array": [5, 1, 22, 25, 6, -1, 8, 10],
//   "sequence": [5, -1, 8, 10]
// }
// Test Case 8
// {
//   "array": [5, 1, 22, 25, 6, -1, 8, 10],
//   "sequence": [25]
// }
// Test Case 9
// {
//   "array": [1, 1, 1, 1, 1],
//   "sequence": [1, 1, 1]
// }
// Test Case 10
// {
//   "array": [5, 1, 22, 25, 6, -1, 8, 10],
//   "sequence": [5, 1, 22, 25, 6, -1, 8, 10, 12]
// }
// Test Case 11
// {
//   "array": [5, 1, 22, 25, 6, -1, 8, 10],
//   "sequence": [4, 5, 1, 22, 25, 6, -1, 8, 10]
// }
// Test Case 12
// {
//   "array": [5, 1, 22, 25, 6, -1, 8, 10],
//   "sequence": [5, 1, 22, 23, 6, -1, 8, 10]
// }
// Test Case 13
// {
//   "array": [5, 1, 22, 25, 6, -1, 8, 10],
//   "sequence": [5, 1, 22, 22, 25, 6, -1, 8, 10]
// }
// Test Case 14
// {
//   "array": [5, 1, 22, 25, 6, -1, 8, 10],
//   "sequence": [5, 1, 22, 22, 6, -1, 8, 10]
// }
// Test Case 15
// {
//   "array": [5, 1, 22, 25, 6, -1, 8, 10],
//   "sequence": [1, 6, -1, -1]
// }
// Test Case 16
// {
//   "array": [5, 1, 22, 25, 6, -1, 8, 10],
//   "sequence": [1, 6, -1, -1, 10]
// }
// Test Case 17
// {
//   "array": [5, 1, 22, 25, 6, -1, 8, 10],
//   "sequence": [1, 6, -1, -2]
// }
// Test Case 18
// {
//   "array": [5, 1, 22, 25, 6, -1, 8, 10],
//   "sequence": [26]
// }
// Test Case 19
// {
//   "array": [5, 1, 22, 25, 6, -1, 8, 10],
//   "sequence": [5, 1, 25, 22, 6, -1, 8, 10]
// }
// Test Case 20
// {
//   "array": [5, 1, 22, 25, 6, -1, 8, 10],
//   "sequence": [5, 26, 22, 8]
// }
// Test Case 21
// {
//   "array": [1, 1, 6, 1],
//   "sequence": [1, 1, 1, 6]
// }
// Test Case 22
// {
//   "array": [5, 1, 22, 25, 6, -1, 8, 10],
//   "sequence": [1, 6, -1, 10, 11, 11, 11, 11]
// }
// Test Case 23
// {
//   "array": [5, 1, 22, 25, 6, -1, 8, 10],
//   "sequence": [5, 1, 22, 25, 6, -1, 8, 10, 10]
// }
// Test Case 24
// {
//   "array": [5, 1, 22, 25, 6, -1, 8, 10],
//   "sequence": [1, 6, -1, 5]
// }