#include <iostream>
#include <vector>

using namespace std;

int Binary_Search(vector<int> vec, int target, int start, int end)
{
    if (start > end)
    {
        return -1;
    }
    int mid = start + ((end - start) / 2);
    if (target < vec[mid])
    {
        Binary_Search(vec, target, start, mid - 1);
    }
    else if (target > vec[mid])
    {
        Binary_Search(vec, target, mid + 1, end);
    }
    else
    {
        return mid;
    }
}