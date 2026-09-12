#include <iostream>
#include <vector>
using namespace std;

bool check(int n) {
    int num = n;

    while (n != 0) {
        int digit = n % 10;

        // Number cannot contain digit 0
        if (digit == 0) {
            return false;
        }

        // Digit must divide the original number
        if (num % digit != 0) {
            return false;
        }

        n /= 10;
    }

    return true;
}

vector<int> selfDividingNumbers(int left, int right) {
    vector<int> ans;

    for (int i = left; i <= right; i++) {
        if (check(i)) {
            ans.push_back(i);
        }
    }

    return ans;
}

int main() {
    int left, right;

    cin >> left >> right;

    vector<int> ans = selfDividingNumbers(left, right);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}