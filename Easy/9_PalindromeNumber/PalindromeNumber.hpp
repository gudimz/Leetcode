#include <iostream>

class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0) {
			return false;
		}
		std::string s = std::to_string(x);
		size_t half = s.size() / 2;
		for (size_t i = 0; i < half; ++i) {
			if (s[i] != s[s.size() - 1 - i]) {
				return false;
			}
		}
		return true;
	}
};