#include<iostream>
using namespace std;
class first
{
    int a,b;
    static int c;
    public:
    void getdata()
    {
        cout<<"enter value of a: ";
        cin>>a;
        cout<<"enter value of b: ";
        cin>>b;
    }
    void showdata()
    {
        cout<<"\nvalue of a: "<<a<<"\nvalue of b: "<<b<<"\nvalue of static variable (c): "<<c<<endl;
        a++;
        b++;
    }
};
int first::c;
int main()
{
    first f;
    f.getdata();
    f.showdata();
    f.showdata();
    return 0;
}