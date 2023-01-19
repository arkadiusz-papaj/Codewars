#include <string>

[[nodiscard]] auto createPhoneNumber(const int arr [10]) -> std::string
{
  std::string phone_number {"(...) ...-...."};

  for (size_t i = 0, idx = 0; i < phone_number.size(); i++)
  {
    if (phone_number.at(i) == '.') phone_number.replace(i, 1, std::to_string(arr[idx++]));
  }

  return phone_number;
}