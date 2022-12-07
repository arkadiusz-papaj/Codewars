#include <string>
#include <sstream>

std::string createPhoneNumber(const int arr [10]){
  std::stringstream ss("");
  
  ss << "(";
  for (int i = 0; i < 10; i++)
  {
    ss << arr[i];
    if (i == 2) ss << ") ";
    else if (i == 5) ss << "-";
  }
  
  return ss.str();
}