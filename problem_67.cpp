#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string addBinary(string a, string b) {
    int m = a.size() - 1;
    int n = b.size() - 1;
    int carry = 0;
    string ans = "";

    while(m >= 0 && n >= 0){
        if((a[m] - '0') + (b[n] - '0') + carry == 2){
            ans += '0';
            carry = 1;
        }
        else if((a[m] - '0') + (b[n] - '0') + carry == 3){
            ans += '1';
            carry = 1;
        }
        else{
            int sum = (a[m] - '0') + (b[n] - '0') + carry;
            ans += to_string(sum);
            carry = 0;
        }
        m--;
        n--;
    }

    while(m >= 0){
        if((a[m] - '0') + carry == 2){
            ans += '0';
            carry = 1;
        }
        else{
            ans += to_string((a[m] - '0') + carry);
            carry = 0;
        }
        m--;
    }

    while(n >= 0){
        if((b[n] - '0') + carry == 2){
            ans += '0';
            carry = 1;
        }
        else{
            ans += to_string((b[n] - '0') + carry);
            carry = 0;
        }
        n--;
    }

    if(carry == 1)
        ans += '1';

    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    string a, b;

    cout << "Enter first binary string: ";
    cin >> a;

    cout << "Enter second binary string: ";
    cin >> b;

    string result = addBinary(a, b);

    cout << "Sum = " << result << endl;

    return 0;
}