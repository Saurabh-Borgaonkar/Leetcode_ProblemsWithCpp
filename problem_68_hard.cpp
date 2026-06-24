#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> fullJustify(vector<string>& words, int maxWidth) {
    vector<string> cur;
    vector<string> res;
    int nol = 0;

    for (string word : words) {

        if (word.size() + cur.size() + nol > maxWidth) {

            for (int i = 0; i < maxWidth - nol; i++) {
                cur[i % (cur.size() - 1 ? cur.size() - 1 : 1)] += ' ';
            }

            string line = "";
            for (string s : cur) {
                line += s;
            }

            res.push_back(line);
            cur.clear();
            nol = 0;
        }

        cur.push_back(word);
        nol += word.size();
    }

    string lastLine = "";

    for (string s : cur) {
        lastLine += s + " ";
    }

    lastLine.pop_back();

    while (lastLine.size() < maxWidth) {
        lastLine += ' ';
    }

    res.push_back(lastLine);

    return res;
}

int main() {
    int n, maxWidth;

    cout << "Enter number of words: ";
    cin >> n;

    vector<string> words(n);

    cout << "Enter words:\n";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    cout << "Enter maxWidth: ";
    cin >> maxWidth;

    vector<string> ans = fullJustify(words, maxWidth);

    cout << "\nOutput:\n";
    for (string s : ans) {
        cout << "|" << s << "|" << endl;
    }

    return 0;
}