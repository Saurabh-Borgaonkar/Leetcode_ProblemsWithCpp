#include <bits/stdc++.h>
using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    string s1 = "";
    string s2 = "";

    for (int i = 0; i < word1.size(); i++) {
        s1 += word1[i];
    }

    for (int i = 0; i < word2.size(); i++) {
        s2 += word2[i];
    }

    return s1 == s2;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> word1(n), word2(m);

    for (int i = 0; i < n; i++) {
        cin >> word1[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> word2[i];
    }

    cout << boolalpha
         << arrayStringsAreEqual(word1, word2) << endl;

    return 0;
}