//242. Valid Anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();
        std::unordered_map<char, int> mapS;
        std::unordered_map<char, int> mapT;
        for (char c : s) {
            mapS[c]++;
        }
        for (char c : t) {
            mapT[c]++;
        }
        if(mapS==mapT){
            return true;
        }
        return false;
    }
};