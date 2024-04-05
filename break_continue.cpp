#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"enter number : ";
     cin>>n;

     for(int i=1;i<=n;i++)
     {
        if(i%2==0)
        {
            continue;
        }
        
        cout<<"value : "<<i<<endl;
     }
     for(int speed=30;speed<=50;speed++)
     {
        if(speed>45)
        {
             break;
        }
        cout<<"you are driving in "<<speed<<" speed"<<endl;
     }
}