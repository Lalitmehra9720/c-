#include<iostream>
using namespace std;
class first
{
    public: 
    string name ,address;
    int roll;
    
    virtual void getdata()
    {
        cout<<"enter candidate name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"enter roll no. : ";
        cin>>roll;
        cout<<"enter full address: ";
        cin.ignore();
        getline(cin,address);
    }
    virtual void display()
    {
        cout<<"candidate name: "<<name<<endl;
        cout<<"roll no. :"<<roll<<endl;
        cout<<"full address: "<<address<<endl;

    }
};
class second : public first
{
    public: 
    void getdata()
    {
        cout<<"enter candidate name: ";
        getline(cin,name);
        cout<<"enter roll no. : ";
        cin>>roll;
        cout<<"enter full address of candidate: ";
        cin.ignore();
        getline(cin,address);

    }
    void display()
    {
        cout<<"candidate name: "<<name<<endl;
        cout<<"candidate roll no. : "<<roll<<endl;
        cout<<"candidate full address: "<<address;
    }
};
int main()
{
    first f ,*ptr;
    second s;
    ptr=&f;
    ptr->getdata();
    ptr->display();
    ptr=&s;
    ptr->getdata();
    ptr->display();
    return 0;
}