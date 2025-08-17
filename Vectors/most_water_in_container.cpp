// Container with Most Water
// Two-Pointer Approach
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int max_storage = 0;
        int start_height = 0;
        int end_height = height.size() - 1;
        ;
        while (start_height < end_height)
        {
            int width = end_height - start_height;
            int length = min(height[start_height], height[end_height]);
            int storage = width * length;
            max_storage = max(max_storage, storage);
            if (height[start_height] < height[end_height])
            {
                start_height++;
            }
            else if (height[start_height] > height[end_height])
            {
                end_height--;
            }
        }
        return max_storage;
    }
};