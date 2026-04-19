/*
258. Add Digits

Given an integer num, repeatedly add all its digits
until the result has only one digit.
Return that digit.
*/

#include <bits/stdc++.h>
using namespace std;

int checkDigit(int n){
    int sum = 0;
    while(n != 0){
        int ld = n % 10;
        sum += ld;
        n /= 10;
    }
    return sum;
}

int main(){
    int num;
    cin >> num;

    while(num >= 10){
        num = checkDigit(num);
    }

    cout << num;
}