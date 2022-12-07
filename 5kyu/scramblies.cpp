#include <string>
#include <map>

bool scramble(const std::string& s1, const std::string& s2){
  std::map<char, int> m1;
  std::map<char, int> m2;
  
  for (auto& ch : s1)
  {
    if (auto [pos, result] = m1.insert({ch, 1}); result == false)
    {
      m1[ch] += 1;  
    }
  }
  
  for (auto& ch : s2)
  {
    if (auto [pos, result] = m2.insert({ch, 1}); result == false)
    {
      m2[ch] += 1;  
    }
  }
  
  for (const auto& [letter, count] : m2)
  {
    if(auto found = m1.find(letter); found != m1.end())
    {
      if (m1[letter] < m2[letter]) return false;  
    }
    else return false;
  }
  return true;
  
  //std::sort(begin(s1), end(s1));
  //std::sort(begin(s2), end(s2));
  //return std::includes(begin(s1), end(s1), begin(s2), end(s2));
}