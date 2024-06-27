//1423. Maximum Points You Can Obtain from Cards

class Solution {
public:
    int maxScore(vector<int>& v, int k) {
        int sum=accumulate(v.begin(),v.end(),0);
        k=v.size()-k;
        int left=0;
        int ans=v[0];
        int s=0;
        for(int right=0;right<v.size();right+=1){
            s+=v[right];
            if(right>=k){
                
                s-=v[left++];
            }
            if(right>=k-1) ans=max(ans,sum-s);
        }
        return ans;
    }
};