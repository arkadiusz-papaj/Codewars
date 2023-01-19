#include <vector>
#include <string>

[[nodiscard]] auto likes(const std::vector<std::string> &names) -> std::string
{
    const auto size = names.size();
    switch (size)
    {
        case 0: return "no one likes this";
        case 1: return names.at(0) + " likes this";   
        case 2: return names.at(0) + " and " + names.at(1) + " like this";;  
        case 3: return names.at(0) + ", " + names.at(1) + " and " + names.at(2) + " like this";
        default: return names.at(0) + ", " + names.at(1) + " and " + std::to_string(size - 2 ) + " others like this";
    }
}