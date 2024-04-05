// program for find product of digits of given number
#include <iostream>
using namespace std;
int main()
{
    // Write C++ code here
    int n, count = 1, rem;
    cout << "enter any number:  ";
    cin >> n;
    for (int i = n; i != 0;)
    {

        rem = i % 10;
        i = i / 10;
        count = rem * count;
    }

    cout << "product of digits: " << count;

    return 0;
}