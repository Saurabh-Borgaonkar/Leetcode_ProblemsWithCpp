#include <iostream>
using namespace std;

int romanToInt(string s) {
    int ans = 0;

    for(int i = 0; i < s.size(); i++){
        char ch = s[i];

        if(ch == 'I'){
            ans += 1;
        }
        else if(ch == 'V'){
            if(i > 0 && s[i-1] == 'I')
                ans += 5 - 2;
            else
                ans += 5;
        }
        else if(ch == 'X'){
            if(i > 0 && s[i-1] == 'I')
                ans += 10 - 2;
            else
                ans += 10;
        }
        else if(ch == 'L'){
            if(i > 0 && s[i-1] == 'X')
                ans += 50 - 20;
            else
                ans += 50;
        }
        else if(ch == 'C'){
            if(i > 0 && s[i-1] == 'X')
                ans += 100 - 20;
            else
                ans += 100;
        }
        else if(ch == 'D'){
            if(i > 0 && s[i-1] == 'C')
                ans += 500 - 200;
            else
                ans += 500;
        }
        else if(ch == 'M'){
            if(i > 0 && s[i-1] == 'C')
                ans += 1000 - 200;
            else
                ans += 1000;
        }
    }

    return ans;
}

int main() {
    string s;
    cin >> s;

    cout << romanToInt(s);
    return 0;
}