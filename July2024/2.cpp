//455. Assign Cookies

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        std::sort(g.begin(),g.end());
        std::sort(s.begin(),s.end());
        int i=0,j=0,ctr=0;
        while(i<g.size() && j<s.size())
        {
            if(s[j] >= g[i])
            {
                ctr++;
                i++;//one cookie might satisfy another child
            }
            j++;//one cookie's satisfaction level is completed, then we move to next cookie
        }
        return ctr;
    }
};