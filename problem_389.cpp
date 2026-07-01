#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

char findTheDifference(string s, string t) {
    unordered_map<char, int> mp;

    for (char c : t)
        mp[c]++;

    for (char c : s)
        mp[c]--;

    for (auto a : mp) {
        if (a.second == 1)
            return a.first;
    }

    return ' ';
}

int main() {
    string s, t;

    cout << "Enter string s: ";
    cin >> s;

    cout << "Enter string t: ";
    cin >> t;

    char ans = findTheDifference(s, t);

    cout << "Extra character: " << ans << endl;

    return 0;
}