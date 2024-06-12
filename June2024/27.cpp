//1752. Check if Array is Sorted and Rotated

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>nums[(i+1)%nums.size()])
            {
                count++;
            }
        }
        return count<=1;//will return true if count does not exceed value 1
        //count<1 means count=0 (wrong,fixing one specific value)
        //count=1 (again wrong,same error as previous)
        //count>1 (more than one inversion, not possible)

        //for ( int i = 0; i < nums.size(); i++)
        //{
        //    if(nums[i]>nums[i+1])
        //    {
        //        return false;
        //    }
        //}
        //return true;
    }
};