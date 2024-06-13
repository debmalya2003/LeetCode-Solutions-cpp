//169. Majority Element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        int n=nums.size();
        return nums[n/2];//because the majority element occurs more than n/2 times, either it's occurrence should start or end at n/2th position
        
    }
};