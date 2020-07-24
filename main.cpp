#include <iostream>
#include <cmath>

using namespace std;

/*
int getMax(int num1, int num2){
    int result;

    if(num1 > num2){
        result = num1;
    }
    else{
        result = num2;
    }

    return result;
}

int main()
{
    cout << getMax(2, 5);

    return 0;

}
*/

int getMax(int num1, int num2, int num3){
    int result;

    if(num1 >= num2 && num1 >= num3){
        result = num1;
    }
    else if(num2 >= num1 && num2 >= num3){
        result = num2;
    }
    else{
        result = num3;
    }

    return result;
}

int main()
{
    //cout << getMax(2, 5, 10);
    //cout << getMax(2, 50, 10);
    //cout << getMax(200, 50, 10);
    cout << getMax(200, 200, 10);

    return 0;
}
