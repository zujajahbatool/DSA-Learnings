//Leetcode Problem - Majority Element
/*  3 Approaches: 
                1. Brute Force(greater time complexity) 
                2. Moore's Voting Algo (best time complexity)
                3. Approach with a better time complexity than Brute
*/
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {
    sort(nums.begin(), nums.end());
    int limit = nums.size() /2;
    return ((nums[limit])) ;
  }
};
int main() {
  Solution s;
  vector<int> n = {2,2,1,1,1,1,2};
  int result = s.majorityElement(n);
  cout <<"Majority element is: " << result << endl;
  return 0;
  return 0;
}