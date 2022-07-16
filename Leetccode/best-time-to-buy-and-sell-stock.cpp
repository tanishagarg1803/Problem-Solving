// Problem Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int c=INT_MAX,a=0;
        for(int i=0;i<prices.size();i++){
            c=min(c,prices[i]);
            a=max(a,prices[i]-c);
        }
        return a;
    }
};
