#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> sequentialDigits(int low, int high) {
    string l = to_string(low);
    string h = to_string(high);

    vector<int> ans;
    string s = "123456789";

    for (int len = l.size(); len <= h.size(); len++) {
        for (int start = 0; start <= 9 - len; start++) {
            string numStr = s.substr(start, len);
            int num = stoi(numStr);

            if (num >= low && num <= high) {
                ans.push_back(num);
            }
        }
    }

    return ans;
}

int main() {
    int low, high;

    cout << "Enter low: ";
    cin >> low;

    cout << "Enter high: ";
    cin >> high;

    vector<int> ans = sequentialDigits(low, high);

    cout << "Sequential Digits: ";
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}