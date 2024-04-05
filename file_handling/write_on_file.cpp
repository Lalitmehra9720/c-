#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    int age;
    float final_percentage;
    char name[10];
    ofstream write("text");
    cout<<"enter your name: ";
    cin>>name;
    cout<<"enter age: ";
    cin>>age;
    cout<<"enter final percentage : ";
    cin>>final_percentage;
    write<<"name : "<<name<<endl<<"age: "<<age<<endl<<"total percentage: "<<final_percentage;
    write.close();
    return 0;   
}