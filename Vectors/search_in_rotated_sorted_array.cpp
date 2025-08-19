#include <iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;
        while (start <= end)
        {
            int mid = start + ((end - start) / 2);
            if (target == nums[mid])
            {
                return mid;
            }
            if (nums[start] <= nums[mid])
            { // left is sorted
                if (nums[start] <= target && target <= nums[mid])
                {
                    // if target lies in this side
                    end = mid - 1;
                }
                else
                {
                    // if target doesn't lies in the sorted side
                    start = mid + 1;
                }
            }
            else
            { // right is sorted
                if (nums[mid] <= target && target <= nums[end])
                {
                    // if target lies in this side
                    start = mid + 1;
                }
                else
                {
                    // if target doesn't lies in the sorted side
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};