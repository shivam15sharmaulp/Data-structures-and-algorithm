// Last updated: 08/05/2026, 09:29:35
class Solution {
public:
    int characterReplacement(string s, int k) {
          unordered_map<char, int> charCount;
        int maxCount = 0, start = 0, maxLength = 0;

        for (int end = 0; end < s.length(); ++end) {
            // Increase the count of the 'end' character
            charCount[s[end]]++;

            // Find the count of the most frequent character in the window
            maxCount = max(maxCount, charCount[s[end]]);

            // If more than 'k' replacements are needed, shrink the window
            if (end - start + 1 - maxCount > k) {
                charCount[s[start]]--; // Decrease the count of the 'start' character
                start++; // Move the start of the window
            }

            // Update the maximum length of the window
            maxLength = max(maxLength, end - start + 1);
        }

        return maxLength;
    }
};