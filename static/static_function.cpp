#include<iostream>
using namespace std;
class first
{
    int a,b;
    static int c;
    public:
    void getdata()
    {
        cout<<"value of a: ";
        cin>>a;
    }
    void get()
    {
        cout<<"value of b: ";
        cin>>b;
    }
    void show()
    {
        cout<<"addition of "<<a<<" and "<<b<<" : "<<a+b<<endl;

    }
    static void abc()
    {
        cout<<"static variable assigned a value that is "<<c<<" automatically."<<endl;
    }
};
int first::c;

int main()
{
    first f;
    f.getdata();
    f.get();
    f.show();
    f.abc();
    return 0;
}