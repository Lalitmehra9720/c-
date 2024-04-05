#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter number: ";
    cin>>n;
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"non prime. ";
            break;
        }
    }
    if(n==i)
    {
        cout<<"prime number. ";
    }

    //from here the second method is started to findout the entered number is prime or not.
    int n2,count=0;
    cout<<"\n\n now second method to find out the entered number is prime or not.\n\n"<<endl;

    cout<<"enter number: ";
    cin>>n2;
    for(i=2;i<n;i++)
    {
         if(n2%2==0) //when we divides the number and we get remainder as 0
         {
            count++;
         }
    }
    if(count==0)
    {
        cout<<"prime number.";
    }
    else{
        cout<<"non prime number.";
    }
}