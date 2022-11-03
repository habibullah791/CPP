#include <iostream>
using namespace std;
int main()
{
    int one;
    int* ptr;

    ptr = &one;

    cout<<"Address of one is: "<<&one<<endl;
    cout<<"Address of ptr is: "<<ptr<<endl;

    *ptr += 10;
    cout<<"Address of ptr is: "<<ptr<<endl;

}