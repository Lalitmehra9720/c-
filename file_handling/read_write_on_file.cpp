#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int roll;
    char name[10],city[10];
//ofstream is used for write something in our file.
    ofstream write("document");
//these things we see in our console screen
    cout<<"enter candidate name: ";
    cin>>name;
    cout<<"enter roll.no: ";
    cin>>roll;
    cout<<"enter city: ";
    cin>>city;
    //from here we write these things in our 'document' file.

//write is our object of ofstream
    write<<name<<endl;
    write<<roll<<endl;
    write<<city<<endl;
    write.close();//here we close our file

    //from here we read from our 'document' file.
    ifstream read("document");
//here we read from our 'document' file.
    read>>name>>roll>>city;

//here we print these things in our console screen.
    cout<<"\nname: "<<name<<endl;
    cout<<"roll.no : "<<roll<<endl;
    cout<<"city: "<<city<<endl;
    read.close();
    return 0;
}