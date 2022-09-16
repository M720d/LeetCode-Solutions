class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        
        vector<int> palin;
        int i=0;
        while(x>0){
            int a = x%10;
            
            palin.push_back(a);
            
            x = x/10;
        }
        
        int j = palin.size()-1;
        
        while(i<j){
            if(palin[i] !=palin[j])
                return false;
            
            i++;
            j--;
        }
        return true;
    }
};