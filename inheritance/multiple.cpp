//program for multiple inheritence
//syntax- class D: public A,public B,..........
#include<iostream>
using namespace std;
class first
{
    public: 
           int a,b;
           void getdata()
           {
            cout<<"marks in maths: ";
            cin>>a;
            cout<<"marks in english: ";
            cin>>b;

           }

};
class second
{
    public: 
           int c,d;
           void getvalue()
           {
            cout<<"marks in science: ";
            cin>>c;
            cout<<"marks in social science: ";
            cin>>d;
           }
};
class third: public first,public second
{
    public: 
           int totl;
             void total()
             {
                totl=a+b+c+d;

             }
        void showdata()
        {
            cout<<"student obtained : "<<totl<<"marks total.";

        }
};
int main()
{
    third t;
    t.getdata();
    t.getvalue();
    t.total();
    t.showdata();
    return 0;
}