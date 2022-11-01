class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
     int n = arr.size();
     unordered_set<int> st;
     int res  = 0;
     for(int i=0;i<n;i++){
         st.insert(arr[i]);
     }
     
     for(int i=0;i<n;i++)
     {
         if(st.find(arr[i]-1) == st.end()){
             int curr = 1;
             while(st.find(curr+arr[i]) != st.end()){
                 curr++;
             }
             res = max(res,curr);
         }
     }
     return res;
    }
};