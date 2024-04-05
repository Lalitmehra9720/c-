//program for default constructor
#include<iostream>
int count=0;
using namespace std;
class first
{
    public: 
           first()
           {
                count++;
                cout<<"constructor "<<count<<" created "<<endl;
           }

};
int main()
{
      first f;
      {
        first f2;
      }
      return 0;
      
}