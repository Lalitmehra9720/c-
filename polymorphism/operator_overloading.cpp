#include<iostream>
using namespace std;
class first
{
    int a,b;
    public:
    void getdata()
    {
        a=10;
        b=20;
    }
    void getdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void operator -()
    {
        a=-a;
        b=-b;
    }
    void show()
    {
        cout<<"value of a:"<<a<<endl;
        cout<<"value of b; "<<b<<endl;
    }
};
int main()
{
    first f,s;
    f.getdata();
    f.show();
    s.getdata(40,50);
    s.show();
    -f;
    -s;
    cout<<"after operator overloading"<<endl;
    f.show();
    s.show();
    return 0;
}