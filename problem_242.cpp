#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s, string t) {

    // If lengths are different, not an anagram
    if(s.size() != t.size()) {
        return false;
    }

    int freq[26] = {0};

    // Count characters of string t
    for(int i = 0; i < t.size(); i++) {
        freq[t[i] - 'a']++;
    }

    // Subtract characters of string s
    for(int i = 0; i < s.size(); i++) {
        freq[s[i] - 'a']--;
    }

    // Check if all values are zero
    for(int i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {

    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    if(isAnagram(s, t)) {
        cout << "Strings are anagrams " << endl;
    } else {
        cout << "Strings are NOT anagrams " << endl;
    }

    return 0;
}