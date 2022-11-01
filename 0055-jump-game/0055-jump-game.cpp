class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n = nums.size();
        int last = nums.size()-1;
        int i;
        
        for(i=n-2;i>=0;i--){
            if(i+nums[i]>=last)
                last = i;
        }
        
        if(last==0)
            return true;
        
        return false;
    }
};