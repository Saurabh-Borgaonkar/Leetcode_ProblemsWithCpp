#include <iostream>
using namespace std;

long long sumAndMultiply(int n) {
    int s = 0;
    int rev = 0;

    while (n != 0) {
        int ld = n % 10;
        if (ld != 0) {
            s += ld;
            rev = rev * 10 + ld;
        }
        n /= 10;
    }

    long long temp = 0;
    while (rev != 0) {
        int ld = rev % 10;
        temp = temp * 10 + ld;
        rev /= 10;
    }

    return 1LL * s * temp;
}

int main() {
    int n;
    cin >> n;

    cout << sumAndMultiply(n);

    return 0;
}