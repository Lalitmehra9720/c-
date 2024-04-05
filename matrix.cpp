#include<iostream>
using namespace std;
int main()
{
    int i,j,sum=0,a[3][3],up_e_sum=0,low_e_sum=0;
    cout<<"enter matrix";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j){
                sum=sum+a[i][j];// when row and column are same then add them
            }
            else if(i<j){
                up_e_sum=up_e_sum+a[i][j];//when value of row is less than column then add them 
            }
            else{
                low_e_sum=low_e_sum+a[i][j];//when value of column is greater than row then automatically add them
            }
        }
    }
     
            cout<<"sum of diagonal elements = "<<sum<<endl;
            cout<< "sum of upper diagonal elements= "<<up_e_sum<<endl;
            cout<<"sum of lower diagonal elements="<<low_e_sum;
    
    return 0;

}