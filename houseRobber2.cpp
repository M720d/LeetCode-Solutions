class Solution {
public:
    
    int solve(vector<int>nums){
        
        int n = nums.size();
        
        vector<int> dp(n);
        int i;
        
       if(n>=1)
           dp[0] = nums[0];
        if(n>=2)
            dp[1] = max(nums[0],nums[1]);
        
        for(i=2;i<nums.size();i++){
            dp[i] = max((nums[i]+dp[i-2]),dp[i-1]);
        }
        
        return dp[n-1];
    }
    
    int rob(vector<int>& nums) {
       
        int n = nums.size();
        
        if(nums.size()==1)
            return nums[0];      
        
        return max(solve(vector<int>(nums.begin(),nums.end()-1)), solve(vector<int>(nums.begin()+1,nums.end())));
    }
};