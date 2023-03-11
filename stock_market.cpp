class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = 50000;
        int sum = 0;
        
        int i;
        for(i=0;i<prices.size();i++){
            if(prices[i] < min){
                min = prices[i];
            } else if(prices[i] - min > sum){
                sum = prices[i] - min;
            }
        }
        
        return sum;
    }
};
