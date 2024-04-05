#include<iostream>
using namespace std;
int i=1;
class my
{


public:
    my()//default constructor
    {
        cout<<"constructor is called "<<i<<endl;
         i++;
    }
    ~my()//destructor : it is used to free our memory means it is used to destroy the 
                         //memory space which is occupied by constructors.
    {
        i--;
        cout<<"distructor destroy the "<<i<<endl;
         
    }
};

int main()
{
    my ob;
    {
        cout<<"block 1: "<<endl;
        my ob;
    }//here destructor is called
    {
        cout<<"block 2:"<<endl;
        my ob;//this object's scope is between the parenthesis 
    }//so here the destructor is called
    my o,s,a;
    return 0;
}//here all the constructors are destroyed