#include <bits/stdc++.h>
using namespace std;

bool digitCount(string num) {
    unordered_map<int, int> mp;

    // Count frequency of each digit
    for (char i : num) {
        mp[i - '0']++;
    }

    // Check frequency against each digit
    for (int i = 0; i < num.size(); i++) {
        if (mp[i] != num[i] - '0') {
            return false;
        }
    }

    return true;
}

int main() {
    string num;
    cin >> num;

    cout << boolalpha << digitCount(num) << endl;

    return 0;
}