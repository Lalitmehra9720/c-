//program for parameterized constructor
#include<iostream>
using namespace std;
int count=0;
class first
{
    public: 
          first()
          {
             count++;
             cout<<"default parameter called."<<endl;

          }
          first(int a)
          {
            cout<<"parameterized parameter called."<<endl;
            cout<<"value  of a: "<<a;
          }
};
int main()
{
    int n;
    first f;
    cout<<"enter number for passing to constructor:  ";
    cin>>n;
    {
        first t,a,s,d;
    }
    first e(n);
}