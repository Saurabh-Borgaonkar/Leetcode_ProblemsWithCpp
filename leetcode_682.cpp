#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

int calPoints(vector<string>& str) {
    stack<int> st;

    for (int i = 0; i < str.size(); i++) {

        if (str[i] == "C") {
            st.pop();
        }
        else if (str[i] == "D") {
            st.push(st.top() * 2);
        }
        else if (str[i] == "+") {
            int first = st.top();
            st.pop();

            int second = st.top();

            st.push(first);
            st.push(first + second);
        }
        else {
            int n = stoi(str[i]);
            st.push(n);
        }
    }

    int sum = 0;

    while (!st.empty()) {
        sum += st.top();
        st.pop();
    }

    return sum;
}

int main() {
    int n;

    cout << "Enter number of operations: ";
    cin >> n;

    vector<string> operations(n);

    cout << "Enter operations: ";
    for (int i = 0; i < n; i++) {
        cin >> operations[i];
    }

    cout << "Total Score: " << calPoints(operations) << endl;

    return 0;
}