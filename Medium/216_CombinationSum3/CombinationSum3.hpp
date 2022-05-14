#include <vector>

class Solution {
public:
	std::vector<std::vector<int>> result;
	std::vector<int> combination;
	std::vector<std::vector<int>> combinationSum3(int k, int n) {
		helper(k, n, 1);
		return result;
    }
private:
	void helper(int k, int n, int start) {
		if (k <= 0) {
			if (n == 0) {
				result.push_back(combination);
			}
			return;
		}
		for (int i = start; i <= 9; ++i) {
			combination.push_back(i);
			helper(k - 1, n - i, i + 1);
			combination.pop_back();
		}
	}
};