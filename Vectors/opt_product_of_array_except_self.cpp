//Product of Array except Self
//Prefix and Suffix method
#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>product;
        vector<int>prefix;
        vector<int>suffix;
        int n = nums.size();

        for(int i = 1; i < n; i++){

            prefix[0] = 1;
            prefix[i] = prefix[i-1] * nums[i-1];
        }

        for(int i = n-2; i > 0; i--){

            suffix[n-1] = 1;
            prefix[i] = prefix[i+1] * nums[i+1];
        }

        for(int i = 0; i < n; i++){
            product[i] = prefix[i] * suffix[i];
        }
        return product;
    }
};

//Most Optimized Approach with reduced space complexity upto O(1)
#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>product(n, 1);

        for(int i = 1; i < n; i++){
            product[i] = product[i-1] * nums[i-1];
        }

        int suffix = 1;
        for(int i = n-2; i>=0; i--){
            suffix = suffix * nums[i+1];
            product[i] = product[i] * suffix;
        }

        return product;
    }
};