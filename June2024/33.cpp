//136. Single Number

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mpp;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it:mpp)//first->key of nums vector
        {
            if(it.second==1)//second->value of that element
            {
                return it.first;//key-value pair in map where key means element itself and value means number of occurrences of that element
            }
        }
        return -1;
    }
};