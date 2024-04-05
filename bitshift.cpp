#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number: ";
    cin>>n;
    cout<<"right shift.\n";
    cout<<n<<">>2 = "<<(n>>2);
    cout<<endl<<"left shift."<<endl;
    cout<<n<<"<<2 = "<<(n<<2);
   
}
/*
  let n=4
  n=00000100 in binary
  we want to shift 1 bit to right         for left shift 
  so-->  n= 0 0 0 0 0 1 0 0                n=0 0 0 0 0 1 0 0
              0 0 0 0 0 1 0 |0           0 | 0 0 0 0 1 0 0 0

then answer = 0 0 0 0 0 1 0              then answer= 0 0 0 0 1 0 0 0
            = 2 in decimal                          = 8 in decimal
*/