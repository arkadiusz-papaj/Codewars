#include <vector>
#include <algorithm>

[[nodiscard]] auto findOdd(const std::vector<int>& numbers) -> int
{
  for (const auto& elem : numbers)
  {
    if(std::count(numbers.begin(), numbers.end(), elem) % 2 != 0)
    {
      return elem;
    }
  }

  return 0;
}