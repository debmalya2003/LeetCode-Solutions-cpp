//860. Lemonade Change

class Solution 
{
public:
    bool lemonadeChange(vector<int>& bills) 
    {
        int n=bills.size();
        long long int change=0;
        int fives=0,tens=0;
        for(int i=0;i<n;i++)
        {
            if (bills[i] == 5) 
            {
                fives++;
            } 
            else if(bills[i]==10)
            {
                if(fives==0)
                {
                    return false;//no five to return for ten
                }
                fives--;//one five to return for ten
                tens++;
            }
            else
            {//if the note is of 20
                if (tens>0 && fives>0) 
                {
                    tens--;
                    fives--;
                } 
                else if (fives>=3) //5*3=15 and 20-15=5
                {
                    fives -= 3;
                } 
                else 
                {
                    return false;
                }
            }
        }
        return true;
    }
};