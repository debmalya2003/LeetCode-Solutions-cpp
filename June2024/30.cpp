//283. Move Zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;

        // Copy non-zero elements to temp
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                temp.push_back(nums[i]);
            }
        }

        // Copy elements from temp back to nums
        for (int i = 0; i < temp.size(); i++) {
            nums[i] = temp[i];
        }

        // Fill remaining elements of nums with zeroes
        for (int i = temp.size(); i < n; i++) {
            nums[i] = 0;
        }
    }
};