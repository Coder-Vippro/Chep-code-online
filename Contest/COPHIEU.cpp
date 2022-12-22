class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int max = 0;
        int n = prices.size();
        for(int i=1,j=0; i<n; i++) 
        {
                if(prices[i]-prices[j]>max && i>j)
                max=prices[i]-prices[j];
                else if((prices[i] - prices[j]) < 0) j = i;
            
        }
        return max;
    }
};