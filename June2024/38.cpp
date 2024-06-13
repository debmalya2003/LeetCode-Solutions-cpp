//2149. Rearrange Array Elements by Sign

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> pos;
        vector<int> neg;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }
        for(int i=0;i<n/2;i++){//n/2 otherwise there will be overflow
            nums[2*i]=pos[i];
            nums[2*i + 1]=neg[i];
        }
        return nums;
    }
};