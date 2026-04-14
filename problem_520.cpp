#include <iostream>
#include <cctype>
using namespace std;

bool detectCapitalUse(string word) {
    int capitalCount = 0;

    for(int i = 0; i < word.size(); i++) {
        if(isupper(word[i])) {
            capitalCount++;
        }
    }

    if(capitalCount == word.size()) return true;          // ALL uppercase
    if(capitalCount == 0) return true;                    // ALL lowercase
    if(capitalCount == 1 && isupper(word[0])) return true; // Only first uppercase

    return false;
}

int main() {
    string word;
    cout << "Enter word: ";
    cin >> word;

    if(detectCapitalUse(word)) {
        cout << "Valid capital usage ✅";
    } else {
        cout << "Invalid capital usage ❌";
    }

    return 0;
}