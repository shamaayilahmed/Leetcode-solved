/*Find the minimum(i.e, bear) value and maximum(i.e, bull) value at the minimum index*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int term=prices.size(),i=0,bear=INT_MAX,bull=0;
        while(i<term){
            bear=min(bear,prices[i]);
            bull=max(bull,prices[i]-bear);
            i++;
        }
        return bull;
    }
};
