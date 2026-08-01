#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int maxPower(string s) {
    int maxCount = 0;
    int count = 0;
    char c = s[0];

    for (int i = 1; i < s.size(); i++) {
        if (c == s[i]) {
            count++;
        } else {
            maxCount = max(maxCount, count);
            count = 0;
            c = s[i];
        }
    }

    maxCount = max(maxCount, count);

    return maxCount + 1;
}

int main() {
    string s;

    cout << "Enter string: ";
    cin >> s;

    cout << "Maximum Power: " << maxPower(s) << endl;

    return 0;
}