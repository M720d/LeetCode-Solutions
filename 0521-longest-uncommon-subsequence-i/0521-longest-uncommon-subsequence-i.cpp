class Solution {
public:
    int findLUSlength(string text1, string text2) {
           int n = text1.size() , m = text2.size();
        
        if(text1==text2)
            return -1;
        
        else if(n==m && text1!=text2)
            return n;
        
        return max(n,m);
            
        // return -1;
    }
};