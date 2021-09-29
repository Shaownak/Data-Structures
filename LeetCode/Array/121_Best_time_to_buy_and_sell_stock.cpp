class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int least_price = INT_MAX;
        int profit = 0;
        
        for(int i=0; i<prices.size(); i++){
            least_price = min(prices[i], least_price);
            profit = max(prices[i] - least_price, profit);
        }
        
        return profit;
    }
};
