//424. Longest Repeating Character Replacement

class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26);
        int maxCount = 0;

        // Two pointers for the sliding window: left and start 
        int left = 0;
        int start = 0;
        
        int result = 0;

        // Iterate through the string with the 'start' pointer
        while (start < s.size()) {
            count[s[start] - 'A']++; // Increment the frequency of the current character in the window

            maxCount = max(maxCount, count[s[start] - 'A']);

// Check if the current window size minus the maximum frequency character is greater than k
            if (start - left + 1 - maxCount > k) {
                count[s[left] - 'A']--; // If yes, shrink the window from the left
                left++;
            }
            result = max(result, start - left + 1);
            start++; // Move the 'start' pointer to the right
        }
        
        return result;
    }
};