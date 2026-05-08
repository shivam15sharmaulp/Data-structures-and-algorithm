// Last updated: 08/05/2026, 09:31:59
class Solution {
public:
    bool isPalindrome(string s) {
         int left = 0, right = s.length() - 1;

        while (left < right) {
            // Move left index to the next alphanumeric character
            while (left < right && !std::isalnum(s[left])) {
                left++;
            }

            // Move right index to the previous alphanumeric character
            while (left < right && !std::isalnum(s[right])) {
                right--;
            }

            // Compare characters
            if (std::tolower(s[left]) != std::tolower(s[right])) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};