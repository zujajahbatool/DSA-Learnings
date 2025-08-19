//LeetCode Problem - Best Time to Buy and Sell Stock
//Brute Force Approach
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0; 
        
        for (int buy = 0; buy < prices.size(); ++buy) {
            for (int sell = buy + 1; sell < prices.size(); ++sell) {

                int profit = prices[sell] - prices[buy];

                if (profit > max_profit) {
                    max_profit = profit;
                }
            }
        }

        return max_profit;
    }
};