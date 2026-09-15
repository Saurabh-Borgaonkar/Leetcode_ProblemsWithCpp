#include <bits/stdc++.h>
using namespace std;

int minimumChairs(string s) {
    int chairs = 0;
    int ans = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'E') {
            chairs++;
        } else {
            chairs--;
        }

        ans = max(ans, chairs);
    }

    return ans;
}

int main() {
    string s;
    cin >> s;

    cout << minimumChairs(s) << endl;

    return 0;
}