class Solution {
public:
    
    int searchLeft(vector<int>& nums,int low, int high, int target){
        
        int fpos=-1;
        
         while(low<=high)
        {
            int mid=(low)+(high-low)/2;
            if(nums[mid]==target)
            {
                fpos=mid;
                high=mid-1;   
            }
            else if(nums[mid]<target)
            {
                low =mid+1;   
            }
            else
            {
                high=mid-1;
            }   
        }
        return fpos;
    }
    
    
    int searchRight(vector<int>& nums,int low, int high, int target){
        
        int lpos=-1;
        
          while(low<=high)
        {
            int mid=(low)+(high-low)/2;
            
            if(nums[mid]<=target)
            {
                if(nums[mid]==target)
                    lpos=mid;
                low=mid+1;   
            }
            else
            {
                high=mid-1;
            }  
          }
        return lpos;
    
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {

        int low=0;
        int high=nums.size()-1;
        int fpos;
        int lpos;
        
       fpos = searchLeft(nums,low,high,target);
       lpos = searchRight(nums,low,high,target);
     
        return {fpos,lpos};
    }
};