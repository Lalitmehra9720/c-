#include<iostream>
using namespace std;
class first
{
    private: int id;
             float salary;
    public:
         first(int id,float salary)
         {
            this-> id=id;
            this-> salary= salary;

         }
        
         
        void display()
    {
            cout<<"employee id: "<<id<<endl;
            cout<<"employee salary: "<<salary;
    }
};

int main()
{
        int id;
        float salary;
        cout<<"enter id of employee: ";
        cin>>id;
        cout<<"enter salary of employee: ";
        cin>>salary;
       first o(id,salary);
       o.display();
       return 0;
}
            
