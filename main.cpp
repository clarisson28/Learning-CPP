#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /*
    //int age;
    //double age;
    //char age;

    cout << "Enter your age: ";
    cin >> age;

    cout << "\nYou are " << age << " years old.";
    */

    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello " << name;

    return 0;
}
