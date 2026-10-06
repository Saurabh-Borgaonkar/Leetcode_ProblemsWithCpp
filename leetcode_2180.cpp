#include <bits/stdc++.h>
using namespace std;

bool digitSum(int n) {
    int sum = 0;

    while (n != 0) {
        int ld = n % 10;
        sum += ld;
        n /= 10;
    }

    return sum % 2 == 0;
}

int countEven(int num) {
    int cnt = 0;

    for (int i = 1; i <= num; i++) {
        if (digitSum(i)) {
            cnt++;
        }
    }

    return cnt;
}

int main() {
    int num;
    cin >> num;

    cout << countEven(num) << endl;

    return 0;
}