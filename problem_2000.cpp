#include <bits/stdc++.h>
using namespace std;
    string reversePrefix(string word, char ch) {
        int idx=word.find(ch);
        reverse(word.begin(),word.begin()+idx+1);
        return word;
    }
int main(){
    string word;
    char ch;
    cin>>word>>ch;
    cout<<reversePrefix(word, ch)<<endl;
    return 0;
}