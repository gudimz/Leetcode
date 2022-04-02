#include <iostream>

class Solution {
private:
    bool isPalindrome(std::string s, int left, int right) {
        for (; left < right; ++left, --right) {
            if (s[left] != s[right]) return false;
		}
        return true;
    }

public:
    bool validPalindrome(std::string s) {
        int pos = 0;
        while (pos < s.size() / 2) {
            if (s[pos] == s[s.size() - 1 - pos]) {
                ++pos;
            } else {
                if (isPalindrome(s, pos + 1, s.size() - 1 - pos)) {
                    return true;
                } else if (isPalindrome(s, pos, s.size() - 2 - pos)) {
                    return true;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};