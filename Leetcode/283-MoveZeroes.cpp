class Solution {
 public:
  auto moveZeroes(vector<int>& nums) -> void {
    auto current = begin(nums);
    for (const auto num : nums) if (num) *(current++) = num;
    fill(current, end(nums), 0);
  }
};
