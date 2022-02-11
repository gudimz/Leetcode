#include <iostream>
#include <algorithm>

class Solution {
public:
    char findTheDifference(std::string s, std::string t) {
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        for (size_t i = 0; i < s.size(); ++i) {
            if (s[i] != t[i]) {
                return t[i];
            }
        }
        return t.back();
    }
};