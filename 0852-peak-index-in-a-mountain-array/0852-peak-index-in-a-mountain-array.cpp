class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
          int l=0,h=nums.size()-1;
        
        int mid;
        
        while(l<=h){
            mid = (l+h)/2;
            
            // if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
            //     return mid;
            
            if(nums[mid]<nums[mid+1])
                l = mid+1;
            
            else
                h = mid-1;
        }
        return l;
    }
};