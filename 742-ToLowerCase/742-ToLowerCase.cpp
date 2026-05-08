// Last updated: 08/05/2026, 09:28:57
class Solution {
public:
    string toLowerCase(string s) {
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);
        return s;
    }
};