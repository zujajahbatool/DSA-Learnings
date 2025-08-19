//Binary Search Approach
//LeetCode Problem - Peak Index in a Mountain Array
//A mountain array always exists
//Starting and the ending indices can never be the peak value
//Peak value is always greater than each of its right side and left side element
//If the mid exists to the right side of mountain, the peak element will be on the left else it will be to the right
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int peak;
        int start = 1;
        int end = arr.size() - 2;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
            {
                return mid;
            }
            if (arr[mid - 1] < arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
            peak = mid;
        }
        return peak;
    }
};