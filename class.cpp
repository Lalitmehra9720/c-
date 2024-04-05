#include <iostream>
using namespace std;
class abc
{
public:
    void add()
    {
        int x, y, sum;
        cout << "enter x: ";
        cin >> x;
        cout << "enter y: ";
        cin >> y;
        cout << "value of x: " << x;
        cout << endl
             << "value of y: " << y << endl;
        sum = x + y;
        cout << "sum of x and y: " << sum << endl;
    }
};
class factorial
{
public:
    void fact()
    {
        int n;
        cout << "enter number to calculate factorial: " << endl;
        cin >> n;
        int f = 1;
        for (int i = 1; i <= n; i++)
        {
            f = f * i;
        }
        cout << "factorial of " << n << " = " << f << endl;
    }
};
class even_odd
{
public:
    void even()
    {
        int n;
        cout << "for check the entered number is even or odd." << endl;
        cout << "enter number: ";
        cin >> n;
        if (n % 2 == 0)
        {
            cout << n << " is even.";
        }
        else
        {
            cout << n << " is odd.";
        }
    }
};
int main()
{
    abc o;
    o.add();
    factorial f;
    f.fact();
    even_odd eo;
    eo.even();

    return 0;
}