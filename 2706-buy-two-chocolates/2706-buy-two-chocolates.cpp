class Solution {
public:
    int buyChoco(vector<int>& prices, int money)
    {
    
        int n =prices.size();
        
        sort(prices.begin(),prices.end());
        
        
        int temp = prices[0] + prices[1];
        
        if(money >= temp)
            return money-temp;
        
        
        
        
        return money;
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};