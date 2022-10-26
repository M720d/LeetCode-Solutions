class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int len;
        vector<vector<int>> dp(n+1, vector<int>(n+1,0));
        
        for(int ind = n-1;ind>=0;ind--){
            for(int preInd = ind-1; preInd>=-1;preInd--){
                len = 0 + dp[ind+1][preInd+1];
                
                if(preInd==-1 || nums[ind]>nums[preInd])
                    len = max(len,1+dp[ind+1][ind+1]);
                
                dp[ind][preInd+1] = len;
            }
        }
        return dp[0][0];
    }
};