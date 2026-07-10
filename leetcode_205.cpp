#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool isIsomorphic(string s, string t) {
    unordered_map<char, char> mp1; // s -> t
    unordered_map<char, char> mp2; // t -> s

    for (int i = 0; i < s.size(); i++) {
        if (mp1.find(s[i]) != mp1.end()) {
            // already mapped
            if (mp1[s[i]] != t[i])
                return false;
        } else {
            mp1[s[i]] = t[i];
        }
    }

    for (int i = 0; i < t.size(); i++) {
        if (mp2.find(t[i]) != mp2.end()) {
            // already mapped
            if (mp2[t[i]] != s[i])
                return false;
        } else {
            mp2[t[i]] = s[i];
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

    if (isIsomorphic(s, t))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}