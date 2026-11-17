class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>>ans(n,vector<int>(n));    
            for(int j=0;j<n;j++){
               int k=0;
                for(int i=n-1;i>=0;i--){
                ans[j][k]=matrix[i][j];
                k++;
            }
        }
        matrix=ans;
    }
};
