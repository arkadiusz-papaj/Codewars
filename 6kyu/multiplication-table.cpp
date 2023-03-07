#include <vector>
#include <cassert>

[[nodiscard]] auto multiplication_table(int n) -> std::vector<std::vector<int>> {
    assert(n >= 0);
    auto table = std::vector<std::vector<int>>(n, std::vector<int>(n));
    
    for (auto column = int{1}; column <= n; column++) {
        for (auto row = int{1}; row <= n; row++) {
            table.at(column - 1).at(row - 1) = column * row;
        }
    }

    return table;
}