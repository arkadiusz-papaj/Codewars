#include <cmath>

[[nodiscard]] constexpr auto is_square(int n) -> bool
{
  if (n < 0) return false;
  
  auto root = static_cast<int>(std::sqrt(n));
  return root * root == n ? true : false;
}