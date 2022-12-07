#include <sstream>
std::string pig_it(std::string str)
{
    std::stringstream ss(str);
    std::string word;
    std::string out("");
  
    while (ss >> word)
    {
        if (word.size() == 1 && word.find_first_of(".,!?:;") != std::string::npos)
        {
          out += word + " ";
          continue;
        }
      
        word.push_back(word.front());
        word.append("ay");
        word.erase(word.begin());
        out += word + " ";
    }
  
    out.pop_back();
    return out;
}