#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int isVowel(char c) {
    return string("aeiou").find(c) != string::npos;
}

int maxVowels(string s, int k) {
    int l = 0;
    int t = 0;
    int r = k - 1;
    int count = 0;
    int mxCount = 0;

    while (r < s.size()) {
        while (t <= r) {
            if (isVowel(s[t]))
                count++;
            t++;
        }

        mxCount = max(count, mxCount);

        l++;
        t = l;
        r++;
        count = 0;
    }

    return mxCount;
}

int main() {
    string s;
    int k;

    cout << "Enter string: ";
    cin >> s;

    cout << "Enter k: ";
    cin >> k;

    cout << "Maximum vowels: " << maxVowels(s, k) << endl;

    return 0;
}