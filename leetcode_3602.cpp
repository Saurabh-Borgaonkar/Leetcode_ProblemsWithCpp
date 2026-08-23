#include <iostream>
using namespace std;

bool checkDivisibility(int n) {
    int num = n;
    int sum = 0;
    int mul = 1;

    while (num > 0) {
        int digit = num % 10;

        sum += digit;
        mul *= digit;

        num /= 10;
    }

    return n % (sum + mul) == 0;
}

int main() {
    int n;
    cin >> n;

    if (checkDivisibility(n))
        cout << "true";
    else
        cout << "false";

    return 0;
}