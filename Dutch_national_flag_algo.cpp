//Time Complexity : O(n)
//Space Complexity : O(1)
#include <iostream>
#include <vector>
using namespace std;

void threeWayPartition(vector<int>& arr, int pivot) {
    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;

    while (mid <= high) {
        if (arr[mid] < pivot) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == pivot) {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}