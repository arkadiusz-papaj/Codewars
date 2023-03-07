#include <vector>
#include <string>
#include <unordered_map>

class DirReduction
{
public:
    static auto dirReduc(std::vector<std::string> &arr) -> std::vector<std::string>;
};

[[nodiscard]] auto DirReduction::dirReduc(std::vector<std::string> &arr) -> std::vector<std::string> {
    if (arr.size() < 2) {return arr;}

    auto oposite_to = std::unordered_map<std::string, std::string>{{"NORTH", "SOUTH"},
                                                                  {"SOUTH", "NORTH"},
                                                                  {"EAST", "WEST"},
                                                                  {"WEST", "EAST"},};
            
    auto after_reduction = std::vector<std::string>{};
    after_reduction.reserve(arr.size());

    for (auto const& elem : arr) {
        if (after_reduction.empty() || (after_reduction.back() != oposite_to.at(elem))) {
            after_reduction.push_back(elem);
        }
        else {
            after_reduction.pop_back();
        }
    }

    return after_reduction;
}