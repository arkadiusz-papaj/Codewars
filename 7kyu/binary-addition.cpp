#include <string>
#include <bitset>

[[nodiscard]] auto add_binary(uint64_t a, uint64_t b) -> std::string
{
  const uint8_t bits_size = 64;
  std::bitset<bits_size> bits {a+b};
  std::string s = bits.to_string();
  
  auto position_of_first_one = s.find_first_of("1");

  return position_of_first_one == std::string::npos ? "0" : s.substr(position_of_first_one);
}