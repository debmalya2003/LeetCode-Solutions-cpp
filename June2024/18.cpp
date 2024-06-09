//326. Power of Three

class Solution {
public:
    bool isPowerOfThree(int n) 
    {
        if(n <= 0) return false;
        double logValue = log(n) / log(3);
        return logValue == (int)logValue;
    }
};