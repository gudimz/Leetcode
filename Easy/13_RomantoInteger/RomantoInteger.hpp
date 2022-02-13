#include <iostream>

class Solution {
    int translater(char c) {
        if (c == 'I') {
            return 1;
        } else if (c == 'V') {
            return 5;
        } else if (c == 'X') {
            return 10;
        } else if (c == 'L') {
            return 50;
        } else if (c == 'C') {
            return 100;
        } else if (c == 'D') {
            return 500;
        } else if (c == 'M') {
            return 1000;
        }
        return 0;
    }
public:
    int romanToInt(std::string s) {
        int result = 0;
        int tmp = 0;
        for (size_t i = 0; i < s.size(); ++i) {
            if (s[i] == s.size() - 1) {
                result += translater(s[i]);
                break;
            }
            if (s[i] == s[i + 1]) {
                tmp += translater(s[i]);
                continue;
            }
            if (translater(s[i]) < translater(s[i + 1])) {
                result += translater(s[i + 1]) - (tmp + (translater(s[i])));
                tmp = 0;
                ++i;
            } else {
                result += (tmp + translater(s[i]));
                tmp = 0;
            }
        }
        if (tmp) {
            result += tmp;
        }
        return result;
    }
};