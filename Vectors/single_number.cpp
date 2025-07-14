//LeetCode Problem - Single Number
#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int unique_num = 0;
        for(int val : nums){
            unique_num = unique_num ^ val; 
        }
        return unique_num;
    }
};
int main() {
  Solution s;
  vector<int>n = {1,2,1,2,3};
  int result = s.singleNumber(n);
  cout << result;
  return 0;
}