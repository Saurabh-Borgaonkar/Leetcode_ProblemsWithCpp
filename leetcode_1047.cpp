#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

string removeDuplicates(string s) {
    stack<char> st;

    for (char ch : s) {
        if (!st.empty() && st.top() == ch) {
            st.pop();
        } else {
            st.push(ch);
        }
    }

    string ans = "";

    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main() {
    string s;

    cout << "Enter string: ";
    cin >> s;

    cout << "Result: " << removeDuplicates(s) << endl;

    return 0;
}