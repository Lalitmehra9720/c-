// program for multi-level inheritance
#include <iostream>
using namespace std;
class first
{
public:
    int a, b;
    void getdata()
    {
        cout << "enter a: ";
        cin >> a;
        cout << "enter b: ";
        cin >> b;
    }
};
class second : public first
{
public:
    int s;
    int sum()
    {
        s = a + b;
        return s;
    }
};
class third : public second
{
public:
    int m;
    void multi()
    {
        m = a * b;
    }
    void display()
    {

        cout << "value of a: " << a << endl;
        cout << "value of b: " << b << endl;
        cout << "summation of " << a << " and " << b << " = " << s << endl;
        cout << "multiplication of " << a << " and " << b << " = " << m << endl;
    }
};
int main()
{
    int su;
    third t;
    t.getdata();
    t.sum();
    t.multi();
    t.display();
    return 0;
}
