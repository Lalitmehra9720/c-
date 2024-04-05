#include<iostream>
using namespace std;
class book
{
      private: 
               int book_no;
               char booktitle[20];
               float price;//per copy
               int total_cost(int n)
               {
                       n=n*price;
                       return n;
               }
     public: 
               int n;
              void read()
              {
                       cout<<"enter book no.: ";
                       cin>>book_no;
                       cout<<"enter book title: ";
                       cin>>booktitle;
                       cout<<"enter price: ";
                       cin>>price;
                       
              }
              void purchase()
              {
                     cout<<"enter number of copies: ";
                     cin>>n;
                     cout<<"total cost of"<<n<<" books: "<<total_cost(n);

              }
};
int main()
{
         book b;
         b.read();
         b.purchase();
}
