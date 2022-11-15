class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0,h=letters.size()-1;
        
        int mid;
        // char ans ="1";
        
        while(l<=h){
            mid = l+(h-l)/2;
            
            if(target<letters[mid]){
                // ans = letters[mid];
                h = mid-1;
            }
            
            else{
                l=mid+1;
            }
        }
        
        return letters[l%letters.size()];
    }
};