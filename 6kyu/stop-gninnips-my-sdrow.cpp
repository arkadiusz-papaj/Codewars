#include <sstream>
#include <algorithm>

[[nodiscard]] auto spinWords(const std::string &str) -> std::string
{
  if (str.size() == 0) return "";
  
  std::stringstream iss{str};
  std::string result;
  std::string word{""};
  const uint8_t min_word_size_to_reverse = 5;
  
  while(iss >> word)
  {
    if (word.size() >= min_word_size_to_reverse)
    {
        //ss << std::string(word.rbegin(), word.rend());
      std::reverse(word.begin(), word.end());
    }
    result += word + " ";
  }
  
  result.pop_back();
  return result;
}// spinWords