//find greatest number in an array
#include<iostream>
using namespace std;
int main()
{
    int *ptr,i,n,great;
    cout<<"enter size of an array: ";
    cin>>n;
    ptr= new int[n];
    cout<<"enter elements of array: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>ptr[i];
    }
    great=INT16_MIN;
    for(i=0;i<n;i++)
    {
           if(ptr[i]>great)
          {
            great=ptr[i];
          }
    }
    cout<<"greater number in an array is : "<<great;
    return 0;
}