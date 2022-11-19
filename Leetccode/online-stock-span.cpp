// Problem Link: https://leetcode.com/problems/online-stock-span/

class StockSpanner {
public:
    stack<pair<int, int>> stk;
    
    StockSpanner() {
        
    }
    
    int next(int price) {
        int res = 1;
        while(!stk.empty() and stk.top().first <= price)
        {
            res += stk.top().second;
            stk.pop();
        }
        stk.push({price, res});
        return res;
    }
};


/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
