#include <iostream>
using namespace std;

struct Hello
{
    char name[25];       // Student name
    int *testScores;     // Dynamically allocated array
    double average = 22; // Test average
};

int main()
{
    Hello *h;
    cout << "Average : " << h->average << "\n";
    h->average = 222;
    cout << "Average : " << h->average << "\n";
} // namespace std;
