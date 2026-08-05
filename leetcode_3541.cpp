#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int maxFreqSum(string s) {
    unordered_map<char, int> mp;

    for (char ch : s) {
        mp[ch]++;
    }

    long long maxVowels = 0;
    long long maxC = 0;

    for (auto it : mp) {
        if (string("aeiou").find(it.first) != string::npos) {
            maxVowels = max(maxVowels, (long long)it.second);
        } else {
            maxC = max(maxC, (long long)it.second);
        }
    }

    return maxVowels + maxC;
}

int main() {
    string s;

    cout << "Enter string: ";
    cin >> s;

    cout << "Answer: " << maxFreqSum(s) << endl;

    return 0;
}