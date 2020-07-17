#include <iostream>

using namespace std;

int main()
{
    string phrase = "Giraffe Academy";
//                   0123456789

    //cout << phrase.length();
    //cout << phrase[0];
    //cout << phrase[2];
    /*phrase[0] = 'B';
    cout << phrase;*/
    //cout << phrase.find("Academy", 0);
    //cout << phrase.find("ffe", 0);
    //cout << phrase.substr(8, 3);
    string phrasesub;
    phrasesub = phrase.substr(8, 3);
    cout << phrasesub;

    return 0;
}
