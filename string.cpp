#include<iostream>
using namespace std;
class first
{
    public: 
            string name;
            void strin()
            {
              cout<<"enter name: ";
              cin>>name;  
              cout<<"user name is "<<name;
            }
           
};
int main()
{
       first f;
       f.strin();
       return 0;
}      
#include<iostream.h>
using namespace std;
class student

{
private:
        int x;
        float n;
        string name;

public:
      void sum()
      {
           cout<<"enter number: ";
           cin>>x;
           cout<<"enter number: ";
           cin>>n;
           
      }