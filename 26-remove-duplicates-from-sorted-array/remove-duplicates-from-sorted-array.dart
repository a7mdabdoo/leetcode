class Solution {
  int removeDuplicates(List<int> nums) {
    nums.sort();
        for (int i = 0; i < nums.length - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                nums.removeAt(i);
                i--;
            }
        }
        return nums.length;
  }
}