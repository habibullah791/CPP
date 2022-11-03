#include <iostream>
using namespace std;
int main()
{
    int ROW = 3;
    int COL = 5;
    int number;
    int sum = 0;
    int marks[ROW][COL];
    float average;

    cout << "-----------------------------\n";

    for (int i = 0; i < ROW; i++)
    {
        cout << "Enter Marks of Student " << i + 1 << " :\n";

        for (int j = 0; j < COL; j++)
        {
            cout << "\tEnter Marks of Test :" << j + 1 << ": ";
            cin >> number;

            marks[i][j] = number;
        }
    }
    for (int i = 0; i < ROW; i++)
    {
        cout << "Marks of Student " << i + 1 << " :\n";

        for (int j = 0; j < COL; j++)
        {
            sum += marks[i][j];
        }

        average = sum/5.0;
        cout<<"Sum is "<<sum;
        cout << "\nScore average of student : " << i + 1 << " is " <<average << "\n";
        sum = 0;
    }
}