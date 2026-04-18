#include <iostream>
#include <cmath>
using namespace std;

int mirrorDistance(int n) {
    int num = n;
    int ans = 0;

    while (num != 0) {
        int ld = num % 10;
        ans = ans * 10 + ld;
        num = num / 10;
    }

    return abs(n - ans);
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Mirror Distance: " << mirrorDistance(n);

    return 0;
}