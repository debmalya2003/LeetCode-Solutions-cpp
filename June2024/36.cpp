//53. Maximum Subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Kadane Algo-We carry subarray sum value as long as it gives a positive sum value
        int sum=0;
        int msum=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            msum=max(sum,msum);
            if(sum<0)
                sum=0;
        }
        return msum;
    }
};