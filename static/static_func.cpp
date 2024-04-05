#include<iostream>
using namespace std;
class A
{
    int a,b,c;
    static int e,f;
    public: 
    void getdata()
    {
        cout<<"enter value of a: ";
        cin>>a;
        cout<<"enter value of b: ";
        cin>>b;
        cout<<"enter value of c: ";
        cin>>c;
    }
    static void show()
    {
        e++;
        f++;
        cout<<"static function can access only static variable: ";
        cout<<endl<<"So : e+f= "<<e+f;
    }
};
int show::e,f;
int main()
{
    A ob;
    ob.getdata();
    show();
}