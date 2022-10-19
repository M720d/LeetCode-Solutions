class Solution {
public:
    int minDistance(string str1, string str2) {
        
        int n = str1.size(), m = str2.size();
        int i,j;
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        
        for(i=0;i<=n;i++)
            dp[i][0] = i;
        
        for(j=0;j<=m;j++)
            dp[0][j] = j;
        
        for(i=1; i<=n; i++){
            for(j=1;j<=m;j++){
                
                // string match
                if(str1[i-1]==str2[j-1])
                    dp[i][j] = dp[i-1][j-1];
                
                else 
                    dp[i][j] = 1 + min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]));
            }
        }
        return dp[n][m];
    }
};