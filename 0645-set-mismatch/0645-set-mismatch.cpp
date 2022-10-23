class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int i, e=1;
        vector<int> set(2);
        bool found = false;
        int miss=-1, dup=-1, dupInd;
        sort(nums.begin(), nums.end());
        
        for(i=1;i<nums.size();i++){
          if(nums[i]==nums[i-1]){
                dup = nums[i];
              dupInd = i;
                // cout << dup;
            }
        }      
            
        for(i=0;i<nums.size();i++){
            
            if(i == dupInd){
                // e++;
                continue;
            }
                
            
            if(e!= nums[i]){
                miss = e;
                break;
                // cout << miss;
            }
            
             e++;
        }
        
        if(miss==-1)
            miss = e;
        set[0]=dup;
        set[1]= miss;
        return set;
    }
};