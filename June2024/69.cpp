//2220. Minimum Bit Flips to Convert Number

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int res=start^goal;//XOR will give us number of set bits to be flipped
        int ctr=0;
        while(res){
            ctr+=res&1;
            res>>=1;//right shift to check next bit
        }
        return ctr;
    }
};