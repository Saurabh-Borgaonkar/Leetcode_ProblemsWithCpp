#include <iostream>
using namespace std;

int smallestNumber(int n, int t) {
    for (int i = n; ; i++) {
        int product = 1;
        int x = i;

        while (x > 0) {
            product *= (x % 10);
            x /= 10;
        }

        if (product % t == 0) {
            return i;
        }
    }
}

int main() {
    int n, t;

    cout << "Enter n and t: ";
    cin >> n >> t;

    cout << "Smallest Number: " << smallestNumber(n, t);

    return 0;
}