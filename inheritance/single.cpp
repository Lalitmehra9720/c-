//program for single inheritance
//single inheritance: when we have one child class and one parent class and 
//child class inherite the parent class means: child class uses the properties of parent class


#include<iostream>
using namespace std;

class first
{
    public: 
        int a, b;
        first()// default constructor 
        {
            cout << "class first constructor is called." << endl;
        }
        void get()//function for get 2 numbers
        {
            cout << "enter value of a: ";
            cin >> a;
            cout << "enter value of b: ";
            cin >> b;
        }
};

class second:public first//class second inherit the class first
{
    public: 
        int sumValue; // Changed variable name to avoid conflict with sum function
        second() // Added constructor to call base class constructor
        {
            cout << "class second constructor is called." << endl;
        }
        void sum()//function for summation of 2 numbers 
        {
            sumValue = a + b;
            cout << "summation of " << a << " + " << b << " = " << sumValue << endl;
        }
};

int main()
{
    second ob;
    ob.get();
    ob.sum();
    return 0;
}
