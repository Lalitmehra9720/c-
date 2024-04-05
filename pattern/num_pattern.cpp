#include<iostream>
using namespace std;
int main()
{    //using while loop
    int n;
    cout<<"enter number of lines: ";
    cin>>n;
    int i=1;
    while(i<=n)
    {
       int j=1;
        while(j<=n)
        {
            cout<<j;
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}
