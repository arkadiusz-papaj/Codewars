#include <string>
#include <map>
#include <vector>
#include <sstream>

std::string format_duration(int seconds) {
    std::map<unsigned int, std::string, std::greater<unsigned int>> seconds_in {{31536000, "year"},
                                            {86400, "day"},
                                            {3600, "hour"},
                                            {60, "minute"},
                                            {1, "second"}};
                                            
    if (seconds == 0) return "now";

    std::vector<std::pair<int, std::string>> v;
    
    for (const auto& [key, value] : seconds_in)
    {
        if (seconds >= key)
        {
            int amount = seconds / key;
            v.push_back(std::make_pair(amount, value));
            seconds -= amount * key;
        }
    };
    
    std::stringstream ss;
    
    for (size_t i = 0; i < v.size(); i++)
    {
        ss << v.at(i).first << " " << v.at(i).second;
        if (v.at(i).first > 1) ss << 's';
        
        if (i + 2 == v.size()) ss << " and ";
        else if (i +1 == v.size()) continue;
        else ss << ", ";
        
    }

    return ss.str();
}