class Solution {
public:
    bool isSubsequence(string text1, string text2) {
      
        int n = text1.size() , m = text2.size();
        int i,j;
        // int ans = 0;
        
        vector<vector<int>> dp(n+1, vector<int>(m+1,0));
        
        for(i=0;i<=n;i++)
            dp[i][0] = 0;
        
        for(j=0;j<=m;j++)
            dp[0][j] = 0;
        
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                
                if(text1[i-1] == text2[j-1]){
                    dp[i][j] = 1+ dp[i-1][j-1];
                 //   ans = max(ans,dp[i][j]);
                }
                
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
     
        
        // cout<< dp[n][m];
        if(dp[n][m] == n)
            return true;
        
        return false;
    }
};