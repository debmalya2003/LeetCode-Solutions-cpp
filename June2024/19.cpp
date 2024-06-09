//342. Power of Four

class Solution {
public:
    bool isPowerOfFour(int n) {
        double x = (double)n; 
        while(true){
            if(x == 1){
                return true;
            }
            else if (x<=0){
                return false;
            }
            x = x/4;
        }
        return false;
    }
};