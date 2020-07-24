#include <iostream>
#include <cmath>

using namespace std;

/*
void sayHi(){
    cout << "Hello User";
}
*/

void sayHi(string name, int age){
    cout << "Hello " << name << " you are " << age << " years old." << endl;
}

int main()
{
    //cout << "Top";
    sayHi("Eddieson", 23);
    sayHi("Clarissa", 23);
    //cout << "Bottom";

    return 0;

}
