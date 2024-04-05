#include<iostream>
#include<string>
using namespace std;
class first
{
    string name,name2;
    public: 
    void getname1()
    {
        cout<<"write first description: ";
        cin>>name;
        cout<<"write second description: ";
        cin>>name2;
    }
    void display()
    {
        cout<<name+name2;
    }
};
int main()
{
    first f;
    f.getname1();
    f.display();
    return 0;
}