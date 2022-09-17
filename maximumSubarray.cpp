class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int i, sum = 0, last = INT_MIN;
        
        
        for(i=0;i<nums.size();i++){
            sum += nums[i];
            
            if(last<sum)
                last = sum;
            
            if(sum<0)
                sum = 0;
        }
        
        return last;
    }
};