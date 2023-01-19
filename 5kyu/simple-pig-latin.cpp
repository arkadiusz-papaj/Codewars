#include <sstream>
#include <utility>

[[nodiscard]] auto pig_it(std::string str) -> std::string
{
    std::stringstream ss{std::move(str)};
    std::string word{""};
    std::string piged{""};
  
    while (ss >> word)
    {
        if (word.find_first_of(".,!?:;") == std::string::npos)
        {
          word.push_back(word.front());
          word.append("ay");
          word.erase(word.begin());
        }
        piged += word + " ";
    }
  
    piged.pop_back();
    return piged;
}