#include <bits/stdc++.h>
using namespace std;

bool validDigit(int n, int x) {
    vector<int> ans;

    while (n != 0) {
        int ld = n % 10;
        ans.push_back(ld);
        n /= 10;
    }

    for (int i = 0; i < ans.size(); i++) {
        if (x == ans[i] && x != ans[ans.size() - 1]) {
            return true;
        }
    }

    return false;
}

int main() {
    int n, x;
    cin >> n >> x;

    if (validDigit(n, x)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}