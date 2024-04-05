//program for friend function
#include<iostream>
using namespace std;
class first
{
       public: 
           int a,b;

           friend void getdata();
           void sum()
           {
              s=a+b;

           }
};
