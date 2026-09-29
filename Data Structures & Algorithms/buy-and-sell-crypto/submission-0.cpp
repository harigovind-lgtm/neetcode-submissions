class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> lmin (prices.size(),1000);
        int mini=1000;
        for(int i=1;i<prices.size();i++)
        {
            mini=min(mini,prices[i-1]);
            lmin[i]=mini;
        }
        int profit=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]>lmin[i])
            profit=max(profit,prices[i]-lmin[i]);
        }
        return profit;
    }
};
