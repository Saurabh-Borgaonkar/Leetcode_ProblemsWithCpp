
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n,k;
    cin >> n;

    int a = 0;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cin >> k;

    for(int i=0;i<n/k;i++){
        reverse(arr.begin()+a, arr.begin()+a+k);
        a = a + k;
    }

    reverse(arr.begin()+a, arr.end());

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}