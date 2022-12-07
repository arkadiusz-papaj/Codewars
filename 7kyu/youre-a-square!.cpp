#include <cmath>

bool is_square(int n)
{
  if (n < 0) return false;
  
  int root = std::sqrt(n);
  return root * root == n ? true : false;
}