#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /*
    int secretNum = 7;
    int guess;

    while(secretNum != guess){
        cout << "Enter guess: ";
        cin >> guess;
    }

    cout << "You Win!";
    */

    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while(secretNum != guess && !outOfGuesses){
        if(guessCount < guessLimit){
            cout << "Enter guess: ";
            cin >> guess;
            guessCount++;
        }
        else {
            outOfGuesses = true;
        }

    }

    if(outOfGuesses){
        cout << "You Lose!";
    }
    else {
        cout << "You Win!";
    }

    return 0;
}
