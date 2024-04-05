#include<iostream>
using namespace std;
class base
{
    public:
    virtual void display()
    {
        cout<<"display base"<<endl;
    }
    virtual void show()
    {
        cout<<"show base"<<endl;
    }
    
};
class derived : public base
{
    public:
    void display()
    {
        cout<<"display derived"<<endl;

    }
    void show()
    {
        cout<<"show derived"<<endl;
    }
};
int main()
{
    base b;
    derived d;
    base *ptr;
    ptr=&b;
    ptr->display();
    ptr->show();
    ptr=&d;
    ptr->display();
    ptr->show();
    return 0;
}