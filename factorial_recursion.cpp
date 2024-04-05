#include<iostream>
using namespace std;
int factorial(int );
int main()
{
    int n,f;
    cout<<"enter number to find factorial: ";
    cin>>n;
    f=factorial(n);
    cout<<"factorial of "<<n<<" : "<<f;
    return 0;
}
int factorial(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}