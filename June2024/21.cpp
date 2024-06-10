//1. Two Sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //for(int i=0;i<nums.size();i++)
        //{
        //    for(int j=i+1;j<nums.size();j++)
        //    {
        //        if (nums[i]+nums[j]==target)
        //        {
        //            return {i,j};
        //        }
        //    }
        //}
        unordered_map<int,int> numMap;
        int n=nums.size();
        for(int i=0;i<n;i++){
            numMap[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            int complement = target - nums[i];
            if(numMap.count(complement) && numMap[complement] != i)//checks whether our calculated complement in present in the numMap or not && our numMap[complement] is similar to some preexisting element or not(because we need two different indices) 
            {
                return {i, numMap[complement]};
            }
        }
        return {} ;
    }
};