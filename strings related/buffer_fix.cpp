// this program is made for fix the buffer by new function which is declared on this program
#include <iostream>
using namespace std;
class str
{
private:
    string description;

public:
    void input();//function declaration
};
void str::input()//function definition
{
    cout << "enter string: ";
    // after entering the string the '\n' character reads automatically
    // and '\n' is read by cin>>description
    // ignore() function is used to clear the buffer which is input automatically
    cin.ignore();
    getline(cin, description);
    // here we use getline() to input string with space
    //  if we use cin>>desctiption. on that case, at the time of output the string when the compiler reads the space key then the string is terminated
    cout << "your entered string is : " << description;
}
int main()
{
    str s;
    s.input();
}