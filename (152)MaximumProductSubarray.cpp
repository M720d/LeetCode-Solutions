class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int i;
        int maxi=nums[0], mini=nums[0];
        int ans = nums[0];
        
        for(i=1;i<nums.size();i++){
            
            if(nums[i]<0)
                swap(maxi, mini);
            
            maxi = max(nums[i], nums[i]*maxi);
            mini = min(nums[i], nums[i]*mini);
            
            ans = max(ans,maxi);
        }
        
        return ans;
    }
};