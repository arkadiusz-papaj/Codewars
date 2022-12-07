#include <sstream>
#include <vector>

std::string likes(const std::vector<std::string> &names)
{
    std::stringstream ss {""};
    switch (names.size())
    {
        case 0:
        ss  << "no one likes this";
        break;
        
        case 1:
        ss << names.at(0) << " likes this";;
        break;
          
        case 2:
        ss << names.at(0) << " and " << names.at(1) << " like this";;
        break;
        
        case 3:
        ss << names.at(0) << ", " << names.at(1) << " and " << names.at(2) << " like this";;
        break;
        
        default:
        ss << names.at(0) << ", " << names.at(1) << " and " << names.size() - 2 << " others like this";
        break;
        
    }
    return ss.str(); // Do your magic!
}