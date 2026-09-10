#include <iostream>
using namespace std;

long long countCommas(long long n) {
    long long ans = 0;

    if (n >= 1000)
        ans += n - 1000 + 1;

    if (n >= 1000000)
        ans += n - 1000000 + 1;

    if (n >= 1000000000)
        ans += n - 1000000000 + 1;

    if (n >= 1000000000000LL)
        ans += n - 1000000000000LL + 1;

    if (n >= 1000000000000000LL)
        ans += n - 1000000000000000LL + 1;

    return ans;
}

int main() {
    long long n;

    cout << "Enter n: ";
    cin >> n;

    cout << "Number of commas: " << countCommas(n);

    return 0;
}