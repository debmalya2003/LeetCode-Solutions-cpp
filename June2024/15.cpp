//974. Subarray Sums Divisible by K

class Solution {
public:
    int subarraysDivByK(std::vector<int>& nums, int k) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for (int j = i; j < nums.size(); j++) {
                sum += nums[j];
                if (sum % k == 0) {
                    count++;
                }
            }
        }
        
        return count;
    }
};