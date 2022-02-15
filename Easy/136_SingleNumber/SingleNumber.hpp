#include <vector>

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        size_t pos = 0;
        for (; pos < nums.size() - 1; pos += 2) {
            if (nums[pos] != nums[pos + 1]) {
                break;
            }
        }
        return nums[pos];
    }
};