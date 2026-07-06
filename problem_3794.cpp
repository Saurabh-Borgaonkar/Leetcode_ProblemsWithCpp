#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string reversePrefix(string s, int k) {
    reverse(s.begin(), s.begin() + k);
    return s;
}

int main() {
    string s;
    int k;

    cout << "Enter string: ";
    cin >> s;

    cout << "Enter k: ";
    cin >> k;

    cout << "Result: " << reversePrefix(s, k) << endl;

    return 0;
}