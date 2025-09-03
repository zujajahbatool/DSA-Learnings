// Time Complexity : O(n^2)
// Space Complexity : O(1)
#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int> arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int previous = i - 1;
        while (previous >= 0 && current < arr[previous])
        {
            arr[previous + 1] = arr[previous];
            previous--;
        }
        arr[previous + 1] = current;
    }
}