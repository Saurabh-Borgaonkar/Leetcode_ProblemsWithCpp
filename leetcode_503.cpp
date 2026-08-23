#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElements(vector<int>& nums) {
    int n = nums.size();

    vector<int> ans(n, -1);
    stack<int> st;

    for (int i = 2 * n - 1; i >= 0; i--) {

        int current = nums[i % n];

        while (!st.empty() && st.top() <= current) {
            st.pop();
        }

        if (i < n && !st.empty()) {
            ans[i] = st.top();
        }

        st.push(current);
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = nextGreaterElements(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}