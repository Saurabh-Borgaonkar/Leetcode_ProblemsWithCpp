#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int mostWordsFound(vector<string>& sentences) {
    int maxWord = 0;

    for (string s : sentences) {
        int word = 1;

        for (char ch : s) {
            if (ch == ' ') {
                word++;
            }
        }

        maxWord = max(maxWord, word);
    }

    return maxWord;
}

int main() {
    int n;

    cout << "Enter number of sentences: ";
    cin >> n;
    cin.ignore();

    vector<string> sentences(n);

    cout << "Enter the sentences:\n";
    for (int i = 0; i < n; i++) {
        getline(cin, sentences[i]);
    }

    cout << "Maximum number of words: "
         << mostWordsFound(sentences) << endl;

    return 0;
}