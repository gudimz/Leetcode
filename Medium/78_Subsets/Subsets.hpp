#include <vector>
#include <iostream>
#include <cmath>

class Solution {
private:
	void recursion(int pos, std::vector<int>& nums, std::vector<int>& tmp, std::vector<std::vector<int> >& result) {
		if (pos == nums.size()) {
			result.push_back(tmp);
			return;
		}
		tmp.push_back(nums[pos]);
		recursion(pos + 1, nums, tmp, result);
		tmp.pop_back();
		recursion(pos + 1, nums, tmp, result);
	}
public:
	std::vector<std::vector<int> > subsets(std::vector<int>& nums) {
		std::vector<std::vector<int> > result;
		std::vector<int> tmp;
		recursion(0, nums, tmp, result);
		return result;
	}
};


