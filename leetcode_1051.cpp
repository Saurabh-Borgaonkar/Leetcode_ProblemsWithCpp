#include <bits/stdc++.h>
using namespace std;

int heightChecker(vector<int>& heights) {
    vector<int> original = heights;

    sort(heights.begin(), heights.end());

    int cnt = 0;

    for (int i = 0; i < heights.size(); i++) {
        if (original[i] != heights[i]) {
            cnt++;
        }
    }

    return cnt;
}

int main() {
    int n;
    cin >> n;

    vector<int> heights(n);

    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    cout << heightChecker(heights) << endl;

    return 0;
}