#include <iostream>
using namespace std;

/*
Question:
Add two integers without using + or - operators (Brute Force Approach)

Logic:
If b > 0:
    increment a and decrement b
If b < 0:
    decrement a and increment b
Repeat until b becomes 0
*/

int sumWithoutPlusMinus(int a, int b) {

    while(b > 0) {
        a++;
        b--;
    }

    while(b < 0) {
        a--;
        b++;
    }

    return a;
}

int main() {

    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Sum = " << sumWithoutPlusMinus(a, b);

    return 0;
}