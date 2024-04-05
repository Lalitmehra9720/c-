//pattern         1
//                1 2 
//                1 2 3 
//                1 2 3 4  
//                1 2 3 4 5   
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter number of lines: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i>=j)
            {
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}