#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

string getHint(string secret, string guess) {
    unordered_map<char, int> mp;
    int cow = 0;
    int bull = 0;

    for (char ch : secret) {
        mp[ch]++;
    }

    for (char ch : guess) {
        if (mp[ch] > 0) {
            mp[ch]--;
            cow++;
        }
    }

    for (int i = 0; i < secret.size(); i++) {
        if (secret[i] == guess[i]) {
            bull++;
            cow--;
        }
    }

    return to_string(bull) + "A" + to_string(cow) + "B";
}

int main() {
    string secret, guess;

    cout << "Enter secret: ";
    cin >> secret;

    cout << "Enter guess: ";
    cin >> guess;

    cout << "Hint: " << getHint(secret, guess) << endl;

    return 0;
}