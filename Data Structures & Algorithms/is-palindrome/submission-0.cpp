class Solution {
public:
    bool isPalindrome(string s) {
        string filtered = "";
        for (char c : s) {
            if (isalnum(c)) {
                filtered += tolower(c);
            }
        }
        string s2 = filtered;
        reverse(s2.begin(), s2.end());
        return filtered == s2;
    }
};
