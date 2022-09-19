class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i, temp;
        
        if(nums.size()!=0 && k>0){
        while(k--){
            temp = nums[nums.size()-1];
            
            for(i=nums.size()-1;i>0;i--){
                nums[i] = nums[i-1]; 
            }
            
            nums[0] = temp;
        }
    }
    }
    // TLE issue
    // time limit exceeded
    
};