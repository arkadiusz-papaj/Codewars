#include <string>
#include <bitset>

std::string add_binary(uint64_t a, uint64_t b) {
  std::bitset<64> bits {a+b};
  std::string s = bits.to_string();
  
  if (s.find_first_of("1") == std::string::npos) return "0";
  else return s.substr(s.find_first_of("1"));
}