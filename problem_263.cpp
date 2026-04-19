/*
263. Ugly Number

An ugly number is a positive integer whose prime factors
are only 2, 3, and 5.

Return true if n is ugly, else false.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n <= 0) {
        cout << "false";
        return 0;
    }

    while(n % 2 == 0)
        n /= 2;

    while(n % 3 == 0)
        n /= 3;

    while(n % 5 == 0)
        n /= 5;

    if(n == 1)
        cout << "true";
    else
        cout << "false";
}