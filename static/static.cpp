#include<iostream> 
using namespace std;
class employee
{
      public: int id;
            static int count;
           
           void getdata()
           {
                  cout<<"enter id: ";
                  cin>>id;
                  
           }  
           void setdata()
           {
                  cout<<"id = "<<id<<" and employee number : "<<++count<<endl;
           }
};
int employee:: count=100;
int main()
{
        int n;
       employee e;
       cout<<"enter terms of repeatation: ";
       cin>>n;
       for(int i=1;i<=n;i++)
       {
            e.getdata();
            e.setdata();
       }
       
       return 0;
}