class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minbuy=prices[0];
        int profit=0;
        for(int sell:prices){
            profit=max(profit,sell-minbuy);
            minbuy=min(minbuy,sell);
        }
        return profit;
    }
};
