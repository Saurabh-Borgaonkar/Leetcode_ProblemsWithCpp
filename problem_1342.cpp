#include <iostream>
using namespace std;

int numberOfSteps(int num) {
    int count = 0;

    while (num > 0) {
        if (num % 2 == 0) {
            num /= 2;
        } else {
            num = num - 1;
        }
        count++;
    }

    return count;
}

int main() {
    int num;

    cout << "Enter number: ";
    cin >> num;

    cout << "Number of steps: " << numberOfSteps(num);

    return 0;
}