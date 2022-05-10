#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int j = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[j] != nums[i]) {
                nums[++j] = nums[i];
            }
        }
        return ++j;
    }
};