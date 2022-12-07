#include <numeric>
#include <vector>

std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    if (n <= 0) return {};
  
    std::vector<int> result = signature;
    for (auto i = 0; i < n - (int)signature.size(); i++)
    {
        result.push_back(std::accumulate(result.begin() + i, result.end(), 0));
    }
    if (n < (int)result.size()) result.resize(n);
    return result;
}