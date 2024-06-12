//26. Remove Duplicates from Sorted Array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[i]!=nums[j])
            {
                nums[i+1]=nums[j];//if elements are not equal, we move the pointer forward,allowing the element to stay in nums
                i++;
            }
        }
        return i+1;
    }
};
