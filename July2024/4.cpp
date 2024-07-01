//678. Valid Parenthesis String

class Solution {
public:
    bool checkValidString(string s) {
        int leftMin = 0, leftMax = 0;//minimum and maximum number oof open parentheses respectively
        for (char c : s) {
            if (c == '(') {
                leftMin++;
                leftMax++;
            } else if (c == ')') {
                leftMin--;
                leftMax--;
            } else {
                leftMin--;
                leftMax++;
            }
            if (leftMax < 0) return false;//more closing parentheses than opening ones
            if (leftMin < 0) leftMin = 0;//we can't have negative open parentheses count
        }
        
        return leftMin == 0;
    }
};