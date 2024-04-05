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