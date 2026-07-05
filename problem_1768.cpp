#include <iostream>
#include <string>
using namespace std;

string mergeAlternately(string word1, string word2) {
    int l1 = word1.size();
    int l2 = word2.size();
    int mn = min(l1, l2);

    string ans = "";
    int c1 = 0;
    int c2 = 0;

    for (int i = 0; i < mn * 2; i++) {
        if (i % 2 == 0) {
            ans += word1[c1];
            c1++;
        } else {
            ans += word2[c2];
            c2++;
        }
    }

    if (l1 > l2) {
        for (int i = mn; i < l1; i++) {
            ans += word1[i];
        }
    } else {
        for (int i = mn; i < l2; i++) {
            ans += word2[i];
        }
    }

    return ans;
}

int main() {
    string word1, word2;

    cout << "Enter first string: ";
    cin >> word1;

    cout << "Enter second string: ";
    cin >> word2;

    cout << "Merged String: " << mergeAlternately(word1, word2) << endl;

    return 0;
}