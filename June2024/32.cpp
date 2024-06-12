//485. Max Consecutive Ones

#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counter = 0;
        int maxCounter = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; ++i) {
            if (nums[i] == 1) {
                counter++;
                maxCounter = max(counter, maxCounter);
            } else {
                counter = 0; // Reset counter when encountering 0 because consecutive Ones is asked
            }
        }
        
        return maxCounter;
    }
};
