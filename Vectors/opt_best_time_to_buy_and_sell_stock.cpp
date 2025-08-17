//LeetCode Problem - Best time to buy and sell stock
#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int best_buy = 0;
        int max_profit = 0;
        for(int i : prices){
            if(best_buy == 0){
                best_buy = i;
            }
            if(i > best_buy){
                int profit = i - best_buy;
                max_profit = max(max_profit, profit);
            }
            best_buy = min(best_buy, i);
        }
        return max_profit;
     }
};

int main() {
  Solution s;
  vector<int> p = {7, 1, 5, 3, 6, 4};
  int result = s.maxProfit(p);
  cout << "Maximum profit is: " << result << endl;
  return 0;
}