//796. Rotate String

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }
        string con=s+s;
        return con.find(goal)!=string::npos;
    }
};