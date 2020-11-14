class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size=prices.size(),profit=0,i=1;
        while(i<size){
            if(prices[i]>prices[i-1]){
                profit+=prices[i]-prices[i-1];
            }
            i++;
        }
        return profit;
    }
};
