class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        vector<vector<int>> dp(n+1, vector<int>(2,0));
        
        dp[n][0] = dp[n][1] = 0;
        
        for(int ind = n-1; ind>=0; ind--){
            for(int buy = 0; buy<=1; buy++){
                long profit = 0;
                
                if(buy){
                    profit = max(-prices[ind]+dp[ind+1][0], 0+dp[ind+1][1]);
                }
                
                else{
                    profit = max(prices[ind]+dp[ind+1][1] , dp[ind+1][0]);
                }
                dp[ind][buy] = profit;
            }  
        }
        
        // for(int i=0;i<=n;i++){
        //     for(int buy = 0; buy<=1; buy++){
        //         cout << dp[i][buy] << " ";
        //     }
        //     cout << endl;
        // }
        return dp[0][1];
    }
};