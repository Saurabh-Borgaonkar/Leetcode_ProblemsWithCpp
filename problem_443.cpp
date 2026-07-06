#include <iostream>
#include <vector>
#include <string>
using namespace std;

int compress(vector<char>& chars) {
    vector<char> ans;
    int count = 0;
    int j = 0;

    for (int i = 0; i < chars.size(); i++) {
        char c = chars[i];
        count = 0;
        j = i;

        while (j < chars.size() && chars[j] == c) {
            count++;
            j++;
        }

        ans.push_back(c);

        if (count > 1) {
            string s = to_string(count);
            for (char a : s)
                ans.push_back(a);
        }

        i = j - 1;
    }

    cout << "Compressed Characters: ";
    for (char ch : ans)
        cout << ch << " ";

    cout << "\nCompressed String: ";
    for (char ch : ans)
        cout << ch;

    cout << "\nLength: " << ans.size() << endl;

    return ans.size();
}

int main() {
    int n;
    cout << "Enter number of characters: ";
    cin >> n;

    vector<char> chars(n);

    cout << "Enter characters: ";
    for (int i = 0; i < n; i++) {
        cin >> chars[i];
    }

    compress(chars);

    return 0;
}