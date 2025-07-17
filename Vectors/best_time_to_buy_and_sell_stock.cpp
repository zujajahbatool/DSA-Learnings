#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for(int buy = 0; buy < prices.size(); buy++){
            for(int sell = buy + 1; sell < prices.size(); sell){
                if(prices[buy] > prices[sell]){
                    profit = 0;
                }
            }
        }
        return 0;
    }
};
int main() {
  Solution s;
  vector<int> p = {7,1,5,3,6,4};

  return 0;
}