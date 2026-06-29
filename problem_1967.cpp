#include <iostream>
#include <vector>
#include <string>
using namespace std;

int numOfStrings(vector<string>& patterns, string word) {
    int count = 0;

    for (string pt : patterns) {
        if (word.find(pt) != string::npos) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cout << "Enter number of patterns: ";
    cin >> n;

    vector<string> patterns(n);

    cout << "Enter patterns:\n";
    for (int i = 0; i < n; i++) {
        cin >> patterns[i];
    }

    string word;
    cout << "Enter word: ";
    cin >> word;

    int result = numOfStrings(patterns, word);

    cout << "Number of patterns found: " << result << endl;

    return 0;
}