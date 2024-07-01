//1550. Three Consecutive Odds

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size();
        int ctr=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==1){
                ctr++;
                if(ctr==3){
                    return true;
                }
            }
            else{
                ctr=0;
            }
        }
        return false;
    }
};