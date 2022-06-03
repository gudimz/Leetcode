class Solution {
    public int searchInsert(int[] nums, int target) {
        int res = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] < target)
                res = i + 1;
            if (nums[i] == target)
                return i;
        }
        return res;
    }
}