#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<pair<int,int>> ans;
        vector<int> a;

        // Count frequency
        for(auto &n : nums){
            mp[n]++;
        }

        // Move hashmap data to vector
        for(auto &i : mp){
            ans.push_back(i);
        }

        // Sort by frequency (descending)
        sort(ans.begin(), ans.end(), [](pair<int,int> a, pair<int,int> b){
            return a.second > b.second;
        });

        // Take first k elements
        for(int i = 0; i < k; i++){
            a.push_back(ans[i].first);
        }

        return a;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1,1,1,2,2,3,4,4,4};
    int k = 3;

    vector<int> result = obj.topKFrequent(nums, k);

    cout << "Top K frequent elements: ";
    for(int x : result){
        cout << x << " ";
    }

    return 0;
}