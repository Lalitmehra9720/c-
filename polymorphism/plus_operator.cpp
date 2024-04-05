
#include<iostream>
using namespace std;
class first
{
    int one,two;
    public: 
    first()
    {
        one=0;
        two=0;
    }
    first(int a,int b)
    {
        one =a;
        two=b;
    }
    first operator +(first second)
    {
        first third;
        third.one=one+second.one;
        third.two=two+second.two;
        return third;
    }
    void display();
};
void first::display()
{
    cout<<one<<endl<<two;
}
int main()
{
    first e(28,25),b(30,29);
    first d=e+b;
    d.display();
    return 0;
}