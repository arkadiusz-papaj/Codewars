#include <string>
#include <algorithm>
//#include <map>

[[nodiscard]] auto scramble(const std::string& s1, const std::string& s2) -> bool {
  std::string string1 {s1};
  std::string string2 {s2};

  std::sort(begin(string1), end(string1));
  std::sort(begin(string2), end(string2));
  
  return std::includes(begin(string1), end(string1), begin(string2), end(string2));

  // std::map<char, int> m1;
  // std::map<char, int> m2;
  
  // for (auto& ch : s1)
  // {
  //   if (auto [pos, result] = m1.insert({ch, 1}); result == false)
  //   {
  //     m1[ch] += 1;  
  //   }
  // }
  
  // for (auto& ch : s2)
  // {
  //   if (auto [pos, result] = m2.insert({ch, 1}); result == false)
  //   {
  //     m2[ch] += 1;  
  //   }
  // }
  
  // for (const auto& [letter, count] : m2)
  // {
  //   if(auto found = m1.find(letter); found != m1.end())
  //   {
  //     if (m1[letter] < m2[letter]) return false;  
  //   }
  //   else return false;
  // }
  // return true;
}