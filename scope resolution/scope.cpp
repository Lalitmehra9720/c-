#include <iostream>
using namespace std;

int x = 10; // Global variable

int main()
{
    int x = 20; // Local variable

    // Accessing local variable x
    cout << "Local x: " << x << endl;

    // Accessing global variable x using scope resolution
    cout << "Global x: " << ::x << endl;

    return 0;
}