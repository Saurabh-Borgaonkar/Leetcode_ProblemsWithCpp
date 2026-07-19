#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool checkInclusion(string s1, string s2) {
    unordered_map<char, int> mp;
    unordered_map<char, int> window;

    for (char c : s1) {
        mp[c]++;
    }

    int l = 0, r = 0;

    while (r < s2.size()) {
        window[s2[r]]++;

        if ((r - l + 1) > s1.size()) {
            window[s2[l]]--;

            if (window[s2[l]] == 0) {
                window.erase(s2[l]);
            }

            l++;
        }

        if (window == mp) {
            return true;
        }

        r++;
    }

    return false;
}

int main() {
    string s1, s2;

    cout << "Enter s1: ";
    cin >> s1;

    cout << "Enter s2: ";
    cin >> s2;

    if (checkInclusion(s1, s2))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}