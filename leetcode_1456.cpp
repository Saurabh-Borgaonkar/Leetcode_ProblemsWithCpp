#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isVowel(char c) {
    return string("aeiou").find(c) != string::npos;
}

int maxVowels(string s, int k) {
    int l = 0;
    int t = 0;
    int r = k - 1;
    int count = 0;
    int mxCount = 0;

    // Count vowels in the first window
    while (t <= r) {
        if (isVowel(s[t])) {
            count++;
        }
        t++;
    }

    mxCount = count;

    // Slide the window
    while (r < s.size() - 1) {
        if (isVowel(s[l])) {
            count--;
        }

        l++;
        r++;

        if (isVowel(s[r])) {
            count++;
        }

        mxCount = max(mxCount, count);
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