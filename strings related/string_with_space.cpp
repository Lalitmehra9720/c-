//program for input string with space
#include<iostream>
using namespace std;
class my_string
{
       private: 
               string text;
       public:
               void input_string();

};
void my_string::input_string()
{
          getline(cin,text);
          cout<<"your string is: "<<text;
}
int main()
{
       my_string s;
       s.input_string();

}