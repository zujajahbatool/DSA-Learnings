//Time Complexity : O(log n)
//Space Complexity : O(1)
#include <iostream>
#include<vector>

using namespace std;

int Binary_Search(vector <int> vec, int target){
    int start = 0;
    int end = vec.size() - 1;
    while(start <= end){
        int mid = start + ((end-start)/2);
        if(target < vec[mid]){
            end = mid-1;
        }
        else if(target > vec[mid]){
            start = mid + 1;
        }
        else{
            return mid;
        }
    }
    return -1;
};