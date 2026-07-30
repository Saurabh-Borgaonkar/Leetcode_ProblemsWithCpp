#include <iostream>
using namespace std;

int digitFrequencyScore(int n) {
    int sum = 0;

    while (n != 0) {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }

    return sum;
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Digit Frequency Score: " << digitFrequencyScore(n) << endl;

    return 0;
}