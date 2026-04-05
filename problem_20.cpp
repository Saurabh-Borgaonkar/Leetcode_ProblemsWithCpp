#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string str) {

        stack<char> st;

        for(int i = 0; i < str.size(); i++) {

            if(str[i] == '(' || str[i] == '{' || str[i] == '[') {
                st.push(str[i]);
            }
            else {

                if(st.empty()) {
                    return false;
                }

                if((str[i] == ')' && st.top() == '(') ||
                   (str[i] == '}' && st.top() == '{') ||
                   (str[i] == ']' && st.top() == '[')) {

                    st.pop();
                }
                else {
                    return false;
                }
            }
        }

        return st.empty();
    }
};

int main() {
    Solution obj;
    string str;

    cout << "Enter parentheses string: ";
    cin >> str;

    if(obj.isValid(str)) {
        cout << "Valid parentheses ✅";
    } else {
        cout << "Invalid parentheses ❌";
    }

    return 0;
}