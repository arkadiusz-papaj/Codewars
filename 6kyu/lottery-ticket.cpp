#include <algorithm>
#include <vector>
#include <string>

[[nodiscard]] auto bingo(std::vector<std::pair<std::string, int>> const& tickets, int win) -> std::string
{
    auto ticket_wins = std::count_if(tickets.begin(), tickets.end(), [](auto const& ticket){
        auto [name, v] = ticket;
        auto value = int{v};
        return std::any_of(name.begin(), name.end(), [value](auto const& letter){return static_cast<int>(letter) == value;});
    });
    return (ticket_wins >= win) ? "Winner!" : "Loser!";
}