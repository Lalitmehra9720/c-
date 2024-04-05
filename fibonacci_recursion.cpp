// print fabonacci series  of n term using recursion
#include <iostream>
using namespace std;
int series(int);

int series(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return (series(n - 1) + series(n - 2));
    }
}
int main()
{
    int n;
    cout << "enter number of terms" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << series(i) << " ";
    }
    return 0;
}