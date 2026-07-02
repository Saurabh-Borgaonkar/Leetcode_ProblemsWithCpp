#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int> mp;

    // Count characters in magazine
    for (char ch : magazine) {
        mp[ch]++;
    }

    // Use characters for ransom note
    for (char ch : ransomNote) {
        mp[ch]--;
        if (mp[ch] < 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string ransomNote, magazine;

    cout << "Enter ransom note: ";
    cin >> ransomNote;

    cout << "Enter magazine: ";
    cin >> magazine;

    if (canConstruct(ransomNote, magazine))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}