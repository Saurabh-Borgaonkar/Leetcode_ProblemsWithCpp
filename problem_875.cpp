#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long isValid(vector<int>& piles, int k){
        long long totalhours = 0;
        for(int pile : piles){
            totalhours += (pile + k - 1) / k;
        }
        return totalhours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int high = 0;

        for(int p : piles){
            high = max(high, p);
        }

        int ans = 0;

        while(l <= high){
            int mid = l + (high - l) / 2;

            if(isValid(piles, mid) <= h){
                ans = mid;
                high = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter number of piles: ";
    cin >> n;

    vector<int> piles(n);
    cout << "Enter pile sizes: ";
    for(int i = 0; i < n; i++){
        cin >> piles[i];
    }

    int h;
    cout << "Enter hours (h): ";
    cin >> h;

    cout << "Minimum eating speed: " << obj.minEatingSpeed(piles, h);

    return 0;
}