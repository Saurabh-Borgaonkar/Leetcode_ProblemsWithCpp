#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string processStr(string s) {
        string ans = "";

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '*') {

                if (!ans.empty()) {
                    ans.pop_back();
                }

            } 
            else if (s[i] == '#') {

                ans += ans;

            } 
            else if (s[i] == '%') {

                reverse(ans.begin(), ans.end());

            } 
            else {

                ans.push_back(s[i]);

            }
        }

        return ans;
    }
};

int main() {
    Solution sol;

    string s;
    cin >> s;

    cout << sol.processStr(s) << endl;

    return 0;
}