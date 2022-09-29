class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
        int sum = 0;
        int ind, target, k;
        
        for(ind=0;ind<nums.size();ind++)
            sum += nums[ind];
        
        k = sum/2;
        vector<vector<bool>> dp(nums.size(), vector<bool>(k+1,0));
        
        if(sum%2!=0 || nums.size()==1)
            return false;
        
       else {           
           for(ind = 0; ind<nums.size(); ind++)
               dp[ind][0] = true;
           
           if(nums[0]<=k)
            dp[0][nums[0]] = true;
           
           for(ind = 1 ; ind<nums.size(); ind++){
               for(target = 1 ; target <= k; target++){
                    bool Notake = dp[ind-1][target];
                    bool take = false;
                   
                   if(nums[ind]<=target)
                       take = dp[ind-1][(target-nums[ind])];
                   
                   dp[ind][target] = take | Notake;
               }
           }
       }
        
        return dp[nums.size()-1][k];
    }
};