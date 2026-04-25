#include <iostream>
#include <vector>
using namespace std;

/*
Question: FizzBuzz Problem

Given an integer n, return a list of strings from 1 to n such that:

1. If the number is divisible by 3, store "Fizz"
2. If the number is divisible by 5, store "Buzz"
3. If the number is divisible by both 3 and 5, store "FizzBuzz"
4. Otherwise, store the number itself as a string

Example:
Input: n = 5
Output: 1 2 Fizz 4 Buzz
*/

vector<string> fizzBuzz(int n) {
    vector<string> ans;

    for(int i = 1; i <= n; i++) {

        // Check if number divisible by both 3 and 5
        if(i % 3 == 0 && i % 5 == 0) {
            ans.push_back("FizzBuzz");
        }

        // Check if number divisible by 3
        else if(i % 3 == 0) {
            ans.push_back("Fizz");
        }

        // Check if number divisible by 5
        else if(i % 5 == 0) {
            ans.push_back("Buzz");
        }

        // Otherwise store number as string
        else {
            ans.push_back(to_string(i));
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    vector<string> result = fizzBuzz(n);

    // Print result
    for(string s : result) {
        cout << s << " ";
    }

    return 0;
}