#include <iostream>
using namespace std;
class A
{
    int a = 4;
    int b = 5;

public:
    int mul()
    {
        int c = a * b;
        return c;
    }
    void show()
    {
        cout<<"value of a: "<<a<<endl;
        cout<<"value of b: "<<b<<endl;
    }
};
// here we are accessing private member of class A so only private functions and member variables are accesable
//but we can access class A, public-member functions in class B by using it under the class B member functions body

class B : private A
{
public:
    //    void mul();      this is not valid  
    void display()
    {
        int result = mul();//here we use class A public function in under the class B member functions body
        cout << "Multiplication of a and b is : " << result << endl;
        show();
    }
};
int main()
{
    B b;
    b.display();
    return 0;

}