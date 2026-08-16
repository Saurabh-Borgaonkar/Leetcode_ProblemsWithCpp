#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

bool backspaceCompare(string s, string t) {
    stack<char> st1;
    stack<char> st2;

    // Process string s
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '#') {
            if (!st1.empty()) {
                st1.pop();
            }
        } else {
            st1.push(s[i]);
        }
    }

    // Process string t
    for (int i = 0; i < t.size(); i++) {
        if (t[i] == '#') {
            if (!st2.empty()) {
                st2.pop();
            }
        } else {
            st2.push(t[i]);
        }
    }

    // Convert stack to string
    string ans1 = "";
    string ans2 = "";

    while (!st1.empty()) {
        ans1 += st1.top();
        st1.pop();
    }

    while (!st2.empty()) {
        ans2 += st2.top();
        st2.pop();
    }

    reverse(ans1.begin(), ans1.end());
    reverse(ans2.begin(), ans2.end());

    return ans1 == ans2;
}

int main() {
    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    if (backspaceCompare(s, t)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}