//LeetCode Problem - Binary Coefficient
#include <iostream>
using namespace std;
class Solution{
    public:
    double myPow(double x, int n) {
        long binary_form = n;
        double power = 1;
        if (binary_form < 0){   //deals if the power is negative
            x = 1/x;
            binary_form = - (binary_form);
        }
        while(binary_form > 0){
            if(binary_form % 2 == 1){   //as we have to consider 1's in binary form
                power = power * x;
            }
            x = x*x;
            binary_form = binary_form / 2;
        }
        return power;
    }
};

int main() {
  Solution s;
  double result = s.myPow(3,8);
  cout << result;
  return 0;
}