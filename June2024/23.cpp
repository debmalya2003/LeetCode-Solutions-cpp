//507. Perfect Number

class Solution {
public:
    bool checkPerfectNumber(int num) {
        int res=0;
        for(int i=1;i<num;i++)
        {
            if(num%i==0)
            {
                res=res+i;
            }
        }
        if(res==num)
            return true;
        else
            return false;
    }
};