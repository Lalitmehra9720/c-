#include<iostream>
using namespace std;
class first
{
    int a,b,sum;
    public:
        first()
        {
              cout<<"enter value of a: ";
              cin>>a;
              cout<<"enter value of b: ";
              cin>>b;
        }
        first(first & c)
        {
            cout<<"now i copied value of a from another constructor."<<endl;
            a= c.b; 
            cout<<"enter the value of b: ";
            cin>>b;
        }
        void show()
        {
            cout<<"value of a: "<<a<<endl;
            cout<<"value of b: "<<b<<endl;
            cout<<"addtion: "<<a+b<<endl;
        }
};
int main()
{
    first ob;
    ob.show();
    first ob1(ob);
    ob1.show();
    return 0;
}