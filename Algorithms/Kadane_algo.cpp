#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maxSubarraySum(vector<int>&arr){
    int result = arr[0];
    int max_ending = arr[0];
    for(int i = 1; i < arr.size(); i++){
        max_ending = max(arr[i], max_ending+arr[i]);
        result = max(result, max_ending);
    }
    return result;
}
