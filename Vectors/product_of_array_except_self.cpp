//Product of Array except Self
//Brute Force Approach
#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>product;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(i != j){
                    product[i] = product[i] * nums[j];
                }
            }
        }
        return product;
    }
};