class Solution {
public:
    int findPeakElement(vector<int>& nums) {
         
        int l = 0;
        int h= nums.size()-1;
        int n= nums.size();
    
        if(n==1)
            return 0;
        
        while(l<=h){
            int mid = (l+h)/2;
            
            if((mid == 0 || nums[mid]>nums[mid-1]) && (mid ==n-1 || nums[mid]>nums[mid+1])){
                return mid;
                break;
            }
            
            else if(nums[mid] > nums[mid+1]){
                h = mid-1;
            }
            
            else l= mid+1;
        }
        
        return 0;
    }
};