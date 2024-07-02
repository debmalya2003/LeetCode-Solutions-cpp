//1021. Remove Outermost Parentheses

class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        string ans = "";
        int balance = 0;

        for(int i=0;i<n;i++)
        {
            if(s[i] == '(')
            {
                if(balance > 0)
                {
                    ans = ans + s[i];
                }
                balance++;
            }
            else
            {
                balance--;
                if(balance > 0)
                {
                    ans = ans + s[i];
                }
            }
        }
        return ans;
    }
};