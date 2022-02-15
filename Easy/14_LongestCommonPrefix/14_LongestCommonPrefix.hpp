#include <iostream>
#include <vector>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        std::string prefix = "";
        for (size_t i = 0; i < strs[0].size(); ++i) {
            for (size_t j = 1; j < strs.size(); ++j) {
                if (strs[0][i] != strs[j][i]) {
                    return prefix;
                }
            }
            prefix += strs[0][i];
        }
        return prefix;
    }
};