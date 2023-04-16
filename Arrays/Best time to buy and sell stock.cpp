You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
             int max_profit = 0;   // initalise the max profit and profit sum variables
              int profit_sum = 0; // this is what we're using to track the value of the profit at each index
              for(int i = 1; i < n; ++i){
                     // first we need to calculate the profit\-sum at each index, remember that this must be greater than or equal to zero
                     profit_sum = std::max(0, profit_sum + prices[i] - prices[i-1]);
                     max_profit = std::max(max_profit,profit_sum); // so for each index, we compare with our previously found maximum, 
              }
              return max_profit; // if the numers were in ascending order, this will just return 0
    }
};
