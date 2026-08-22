#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

vector<int> nextGreaterElement(vector<int>& n1, vector<int>& n2) {
    vector<int> ans;
    stack<int> st;
    unordered_map<int, int> mp;

    for (int i = n2.size() - 1; i >= 0; i--) {
        int current = n2[i];

        while (!st.empty() && st.top() <= current) {
            st.pop();
        }

        if (st.empty()) {
            mp[current] = -1;
        } else {
            mp[current] = st.top();
        }

        st.push(current);
    }

    for (int i : n1) {
        ans.push_back(mp[i]);
    }

    return ans;
}

int main() {
    int n1Size, n2Size;

    cin >> n1Size;
    vector<int> n1(n1Size);

    for (int i = 0; i < n1Size; i++) {
        cin >> n1[i];
    }

    cin >> n2Size;
    vector<int> n2(n2Size);

    for (int i = 0; i < n2Size; i++) {
        cin >> n2[i];
    }

    vector<int> ans = nextGreaterElement(n1, n2);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}