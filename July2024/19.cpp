//451. Sort Characters By Frequency

class Solution {
public:
    string frequencySort(string s) {
        int n=s.length();
        std::unordered_map<char, int> mapS;
        for (char c : s) {
            mapS[c]++;
        }
        std::vector<std::pair<char, int>> frequencyVector(mapS.begin(), mapS.end());
        std::sort(frequencyVector.begin(), frequencyVector.end(), 
                  [](const std::pair<char, int>& a, const std::pair<char, int>& b) {// [] function is the comparatr that tells the order of sorting(i.e. sort if a>b)
                      return a.second > b.second; // Sort by frequency (descending)
                  });
        
        std::string result;
        for (const auto& pair : frequencyVector) {
            result.append(pair.second, pair.first); // Append character 'pair.first' 'pair.second' times
        }
        
        return result;
    }
};