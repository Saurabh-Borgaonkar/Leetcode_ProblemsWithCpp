#include <iostream>
using namespace std;

bool checkRecord(string s) {
    int aCount = 0;
    int lCount = 0;

    for(char c : s) {
        if(c == 'A') {
            aCount++;
            lCount = 0;
        }
        else if(c == 'L') {
            lCount++;
        }
        else {
            lCount = 0;
        }

        if(aCount >= 2 || lCount >= 3) {
            return false;
        }
    }

    return true;
}

int main() {
    string s;
    cin >> s;

    if(checkRecord(s))
        cout << "true";
    else
        cout << "false";

    return 0;
}