#include <bits/stdc++.h>
using namespace std;

int reverseDegree(string s) {
    int sum = 0;

    for (int i = 0; i < s.size(); i++) {
        int val = 123 - s[i];

        sum += val * (i + 1);
    }

    return sum;
}

int main() {
    string s;
    cin >> s;

    cout << reverseDegree(s) << endl;

    return 0;
}