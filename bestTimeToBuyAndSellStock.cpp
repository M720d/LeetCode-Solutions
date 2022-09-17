class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int min= 100000;
        int i;
        int profit = -1;
        
        for(i=0;i<prices.size();i++){
            if(min >prices[i])
                min = prices[i];
                
            if(prices[i] - min > profit)
                profit = prices[i] - min;
        }
        return profit;
    }
};