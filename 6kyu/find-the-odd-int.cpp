#include <vector>
#include <map>

int findOdd(const std::vector<int>& numbers){
  std::map<int, int> m;
  
  for (auto & element : numbers)
  {
    auto [it, success] = m.insert(std::pair{element, 1});
    if (success == false) m[element] +=1;
  }
  
  for (auto it = m.begin(); it != m.end(); ++it)
  {
    if (it->second % 2 != 0) return it->first;
  }
}