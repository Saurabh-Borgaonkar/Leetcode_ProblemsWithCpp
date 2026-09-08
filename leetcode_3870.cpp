#include <iostream>
using namespace std;

int countCommas(int n) {
    if (n < 1000) {
        return 0;
    }

    return n - 999;
}

int main() {
    int n;
    cin >> n;

    cout << countCommas(n);

    return 0;
}