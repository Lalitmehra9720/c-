// find the sum of n natural numbers
#include <iostream>
using namespace std;
int sum(int);

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sum(n - 1);
    }
}
int main()
{
    int n, f;
    cout << "enter number : ";
    cin >> n;
    f = sum(n);
    cout << "summation of " << n << " natural numbers : " << f;
    return 0;
}