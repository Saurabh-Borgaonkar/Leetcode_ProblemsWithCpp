#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {

    int MOD = 1000000007;
    long long temp = 0;
    long long sum = 0;
    int l, r;
    vector<int> ans;

    for (int i = 0; i < queries.size(); i++) {
        sum = 0;
        temp = 0;

        l = queries[i][0];
        r = queries[i][1];

        for (int j = l; j <= r; j++) {
            int ch = s[j] - '0';

            if (ch != 0) {
                sum += ch;
                temp = (temp * 10 + ch) % MOD;
            }
        }

        long long total = (sum * temp) % MOD;
        ans.push_back(total);
    }

    return ans;
}

int main() {

    string s = "9876543210";

    vector<vector<int>> queries = {
        {0, 9}
    };

    vector<int> ans = sumAndMultiply(s, queries);

    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}