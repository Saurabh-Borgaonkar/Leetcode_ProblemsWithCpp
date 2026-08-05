class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<int,int>mp;
        for(auto i : s){
            mp[i]++;
        }
        long long maxVowels=0;
        long long maxC=0;
        for(auto i : mp){
            if(string("aeiou").find(i.first)!=string::npos){
                maxVowels=max(maxVowels,(long long)i.second);
            }else{
                maxC=max(maxC,(long long)i.second);
            }
        }
        cout<<maxVowels+maxC;
        return maxVowels+maxC;
    }
};