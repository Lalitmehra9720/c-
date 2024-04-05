#include<iostream>
using namespace std;
class demo
{
    int a,b;
    public:
    demo()
    {
        a=10;
        b=20;
    }
    demo(demo & c)
    {
        a= c.b;
        b= 100;
        cout<<"here value of b copied in a:"<<a<<endl;
        cout<<"and here the value of B:"<<b;
    }
    void display()
    {
        cout<<"value of a: "<<a<<endl<<"value of b:"<<b<<endl;
        cout<<"a+b: "<<a+b<<endl;
    }
};
int main()
{
    demo a;
    a.display();
    demo b(a);
    b.display();
    return 0;
}