//Brute Force Approach
#include <iostream>
#include <algorithm>
#include <climits>  // For INT_MIN
using namespace std;

int Max_Subarray_Sum(int arr[], int size) {
    int max_sum = INT_MIN;
    for (int start = 0; start < size; start++) {
        int curr_sum = 0;
        for (int end = start; end < size; end++) {
            curr_sum += arr[end];
            max_sum = max(curr_sum, max_sum);
        }
    }
    return max_sum; 
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int answer = Max_Subarray_Sum(a, 5); 
    cout << answer;
    return 0;
}
