// Time Complexity : O(n^2)
// Space Complexity : O(1)
#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int> arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallest_valueindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[smallest_valueindex] > arr[j])
            {
                smallest_valueindex = j;
            }
        }
        swap(arr[i], arr[smallest_valueindex]);
    }
}