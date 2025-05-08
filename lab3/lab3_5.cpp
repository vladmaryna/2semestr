#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string S, word;
    getline(cin, S);

    stringstream ss(S);
    string minWord, maxWord;

    while (ss >> word) {
        cout << "Слово: " << word << endl;
        if (minWord.empty() || word.length() < minWord.length())
            minWord = word;
        if (word.length() > maxWord.length())
            maxWord = word;
    }

    cout << "Найменше слово: " << minWord << endl;
    cout << "Найдовше слово: " << maxWord << endl;
    return 0;
}