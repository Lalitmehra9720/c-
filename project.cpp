
#include <iostream>
using namespace std;
class project
{
public:
    int id;
    string name, department;

    void getdata()
    {
        cout << "enter student id: ";
        cin >> id;
        cout << "enter student name: ";
        cin.ignore();
        getline(cin, name);
        cout << "enter department: ";
        getline(cin, department);
    }
    void show()
    {
              cout<<endl<<endl<<"THIS IS ALL ABOUT YOU: "<<endl<<endl;
              cout<<"student id: "<<id<<endl;
              cout<<"student name: "<<name<<endl;
              cout<<"student's department: "<<department<<endl;
    }
};
class teachers:public project
{
public:
    int code;
    char key;
    string name1 = "Dr.Sanjeev ajlawat.", name2 = "Mr.Bhupendra singh.", name3 = "Mr.M.k.Pandey.",
           name4 = "Mrs.Vatsala tolia.", name5 = "Mrs.Deepa tolia.",teacher_choice;
    void teacher()
    {
        cout << "subject codes----- \n chemistry : 101\nhindi: 102 \n maths: 103\nenglish: 104\nscience: 105"<<endl;

        cout << "enter subject code whose teacher you want: ";
        cin >> code;
        switch (code)
        {
        case 101:
            cout << name1;
            teacher_choice=name1;
            break;
        case 102:
            cout << name2;
            teacher_choice=name2;
            break;
        case 103:
            cout << name3;
            teacher_choice=name3;
            break;
        case 104:
            cout << name4;
            teacher_choice=name4;
            break;
        case 105:
            cout << name5;
            teacher_choice=name5;
            break;
        default:
            cout << "invalid code.";
        }
        cout << "are you want to know more information about teacher:  " << endl;
        cout << "press 'y' for yes \n press 'n' for no" << endl;
        cin >> key;
        if (key == 'y')
        {
            cout << "your choice teacher: " <<teacher_choice<<endl;
            cout<<"email: "<<teacher_choice<<"7856@gmail.com"<<endl;
            cout<<"contact: 8954534940"<<endl;

        }
        
    }

};
int main()
{
    project p;
    p.getdata();
    p.show();
    teachers t;
    t.teacher();
    return 0;
}

/*
#include <iostream>
#include <string>
using namespace std;

string removePrefix(const string& fullName) {
    string prefix = "Mr. ";
    if (fullName.compare(0, prefix.length(), prefix) == 0) {
        return fullName.substr(prefix.length());
    }
    return fullName;
}

int main() {
    string name = "Mr. Lalit Mehra";
    cout << "Original Name: " << name << endl;
    string newName = removePrefix(name);
    cout << "New Name: " << newName << endl;
    return 0;
}
*/
