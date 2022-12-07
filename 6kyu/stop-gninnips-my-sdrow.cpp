#include <sstream>
std::string spinWords(const std::string &str)
{
  if (str.size() == 0) return "";
  
  std::stringstream iss(str);
  std::stringstream ss;
  std::string word("");
  
  while(iss >> word)
  {
    if (word.size() >= 5)
    {
        //ss << std::string(word.rbegin(), word.rend());
      std::reverse(word.begin(), word.end());
      ss << word;
    }
    else ss << word;
    
    ss << " ";
  }
  return ss.str().substr(0, ss.str().find_last_of(" "));
  //return ss.str().pop_back();
}// spinWords