class Solution {
public:

    bool judgeSquareSum(int c) {
        
        // if(c==0)
        //     return true;
        
        long long k = sqrt(c);;
        long long i = 0;
        while(i<=k){
            if(i*i + k*k == c)
                return true;
            
            else if(i*i + k*k > c)
                k--;
            
            else if(i*i + k*k < c)
                i++;
        }
        return false;
    }
};