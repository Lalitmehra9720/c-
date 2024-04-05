#include<iostreamnn n>
using namespace std;
int summation(int);
int main()
{
    int n;
    cout<<"enter number: ";
    cin>>n;
    cout<<"summation of "<<n<<" natural numbers: "<<summation(n);
    return 0;

}
int summation(int a)
{
    if(a==0)
    {
        return 0;
    }
    else if(a==1)
    {
        return 1;
    }
    else{
        return (a+summation(a-1));
    }
}