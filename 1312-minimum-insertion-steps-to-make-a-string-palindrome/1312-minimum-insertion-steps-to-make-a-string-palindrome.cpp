class Solution {
public:
    int minInsertions(string s) {
        int n = s.size();
        string sr = s;
        reverse(sr.begin(), sr.end());
        int i,j;
        //int ans = 0;
        
        vector<vector<int>> dp(n+1, vector<int>(n+1,0));
        
        for(i=0;i<=n;i++)
            dp[i][0] = 0;
        
        for(j=0;j<=n;j++)
            dp[0][j] = 0;
        
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                
                if(s[i-1] == sr[j-1]){
                    dp[i][j] = 1+ dp[i-1][j-1];
                 //   ans = max(ans,dp[i][j]);
                }
                
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
     
        int res = n - dp[n][n];
        return res;
    }
};