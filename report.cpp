#include<iostream>
using namespace std;
class report
{
           private: int adno,n,i;  
           
                    char name[20];
                    float marks[20],average;
                    int getavg()
                    {
                         average=0;
                         for(i=0;i<n;i++)
                         {
                             average=marks[i]+average;
                         }
                         average=average/n;
                         return average;
                    }
           public:
                   void readdata()
                   {
                         cout<<"enter ad number: ";
                         cin>>adno;
                         cout<<"enter number of subjects: ";
                         cin>>n;
                         cout<<"enter name: ";
                         cin>>name;
                         cout<<"enter marks of "<<n<<" subjects: ";
                         for(i=0;i<n;i++)
                         {
                            cin>>marks[i];
                         }
                         getavg();
                   }
                void displayinfo();
                 
};
void report:: displayinfo()
{
    cout<<"ad number = "<<adno<<endl;
    cout<<"name of candidate: "<<name<<endl;
    cout<<"number of subjects: "<<n<<endl;
    cout<<"marks in subjects: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<marks[i]<<endl;
    }
    cout<<"average marks: "<<average;
}
int main()
{
        report r;
        r.readdata();
        r.displayinfo();
}