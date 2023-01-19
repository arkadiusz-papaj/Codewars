#include <numeric>
#include <vector>

[[nodiscard]] auto tribonacci(std::vector<int> signature, int n) -> std::vector<int>
{
    if (n <= 0) return {};
    if (n < 3) signature.resize(n);

    auto result_size = static_cast<int>(signature.size());

    for (auto i = 0; i < n - result_size; i++)
    {
        signature.push_back(std::accumulate(signature.begin() + i, signature.end(), 0));
    }

    return signature;
}