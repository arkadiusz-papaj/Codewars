#include <vector>
#include <algorithm>

[[nodiscard]] auto solution(std::vector<int> nums) -> std::vector<int> {
    if (!nums.empty()) {
        std::sort(nums.begin(), nums.end());
    }
    return nums;
}