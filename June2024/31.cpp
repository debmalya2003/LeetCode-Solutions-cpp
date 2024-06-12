//268. Missing Number
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        std::sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=i)
            {
                return i;
            }
        }
        return n;//in cases where missing numbers exceeds range
    }
};