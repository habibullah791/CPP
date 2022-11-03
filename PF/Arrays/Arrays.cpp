#include <iostream>
using namespace std;
int main()
{
    // declaring the array
    int number[10], input, count = 0;
    char ch;

    // int array[] {1,2,3};

    // give size of the array sizeof() function return the total size if bytes
    // cout<<"Size of array [] "<<sizeof(array)/sizeof(int);

    // cout<<"Size of Count"<< sizeof(count);
    // cout<<"Size of ch"<< sizeof(ch);

    cout << "\nEnter data in array \n";

    for (int i = 0; i < 5; i++)
    {
        cin>>input;
        number[i] = input;
        count+= number[i];
    }

    for (int i = 0; i < 5; i++)
    {
       cout<<"Element at "<<i+1<<" is: "<<number[i]<<endl;
    }
       cout<<"Total is: "<<count<<endl;
}