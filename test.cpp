#include<iostream>
using namespace std;
class test
{
       private: 
                int  center, testcode,nocandidate;
                string description;
                int calcntr()
                 {
                        center=(nocandidate/100+1);
                        return center;
                 }
       public:
               int c;
               void schedule()
               {
                     cout<<"enter testcode: ";
                     cin>>testcode;
                     cout<<"enter number of candidate";
                     cin>>nocandidate;
//after cin the cursor goes to next line and compiler reads \n character
//which is read by next statement 
//to fix this problem we use cin.ignore() function
                     cout<<"enter your description: ";
                     cin.ignore();//it ignore the buffer 
                     getline(cin,description);
                     c=calcntr();
                    
               }
                 void display_test()
                  {
                            cout<<"test code: "<<testcode<<endl;
                            cout<<"total candidates: "<<nocandidate<<endl;
                            cout<<"center of exam: "<<c<<endl;
                            cout<<"description of exam: "<<description<<endl;

                  }
};
int main()
{
            test t;
            t.schedule();
            t.display_test();
            return 0;
}