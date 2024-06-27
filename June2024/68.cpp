//231. Power of Two

class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0;i<31;i++){//integer maximum value is upto 2^32
            int ans=pow(2,i);
            if(ans==n)
                return true;
        }
        return false;
    }
};
