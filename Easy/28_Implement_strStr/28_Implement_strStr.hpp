#include <iostream>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        if (!needle.size())
            return 0;
        int start = 0;
        for (int pos = 0; pos < haystack.size(); ++pos) {
            if (haystack[pos] == needle[0]) {
                start = pos;
                while (start - pos != needle.size() && start != haystack.size() && 
                       haystack[start] == needle[start - pos]) {
                    ++start;
                }
                if (start - pos == needle.size()) {
                    return pos;
                }
            }
        }
        return -1;
    }
};