#include <iostream>
#include <cmath>

using namespace std;

int power(int baseNum, int powNum){
    int result = 1;
    for(int i = 0; i < powNum; i++){
        result *= baseNum;
    }

    return result;
}

int main()
{
    //cout << power(2,3);
    cout << power(4, 2);

    return 0;
}
