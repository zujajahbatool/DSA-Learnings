//Two-Pointer Approach
//LeetCode Problem - Two Sum (Pair Sum)
#include <iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    vector <int> twoSum(vector<int>& nums, int target){
        int i = 0;
        int j = nums.size() - 1;
        while (i < j){
            int pair_sum = nums[i] + nums[j];
            if(pair_sum > target){
                j--;
            }
            if(pair_sum < target){
                i++;
            }
            else{
                return {i, j};
            }
        }
    }
};
int main() {
  Solution s;
  int t;
  cout << "Enter the target value: ";
  cin >> t;
  vector< int >n = {2,7,11,15};
  vector <int> res = s.twoSum(n, t);
  cout << res[0] <<","<<res[1]<<endl;
  return 0;
}