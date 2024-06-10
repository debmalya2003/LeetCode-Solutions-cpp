//88. Merge Sorted Array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3(m+n);
        std::merge(nums1.begin(), nums1.begin() + m, nums2.begin(), nums2.end(), nums3.begin());//we are not writing nums1.begin(), nums1.end() because nums1 has m significant values and n values are extra for accomodating nums2
        std::copy(nums3.begin(),nums3.end(),nums1.begin());
    }
};