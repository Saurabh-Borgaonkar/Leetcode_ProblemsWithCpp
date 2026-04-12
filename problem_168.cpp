#include <iostream>
#include <algorithm>
using namespace std;

string convertToTitle(int columnNumber) {

    string ans = "";

    while(columnNumber > 0) {
        columnNumber--;  // adjust for 1-based indexing
        
        ans += ('A' + columnNumber % 26);
        
        columnNumber /= 26;
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main() {

    int columnNumber;
    cout << "Enter column number: ";
    cin >> columnNumber;

    string result = convertToTitle(columnNumber);

    cout << "Excel Column Title: " << result << endl;

    return 0;
}