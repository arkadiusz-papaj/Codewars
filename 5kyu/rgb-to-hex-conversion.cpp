#include <string>
#include <sstream>
#include <iomanip>
// #include <unordered_map>
// #include <algorithm>

class RGBToHex
{
  public:
  static auto rgb(int r, int g, int b) -> std::string;
};

[[nodiscard]] auto RGBToHex::rgb(int r, int g, int b) -> std::string {
  auto stream = std::ostringstream{};
  auto boundCheck = [](int min, int value, int max) -> int {
    return (value < min ? min : (value > max ? max : value));
  };

  stream << std::uppercase << std::hex << std::setfill('0')
         << std::setw(2) << boundCheck(0, r, 255)
         << std::setw(2) << boundCheck(0, g, 255)
         << std::setw(2) << boundCheck(0, b, 255);
  return stream.str();
}

// std::string RGBToHex::rgb(int r, int g, int b) {
//   auto hexValues = std::unordered_map<int, char>{{0, '0'},{1, '1'},{2, '2'},{3, '3'},
//                                                  {4, '4'},{5, '5'},{6, '6'},{7, '7'},
//                                                  {8, '8'},{9, '9'},{10, 'A'},{11, 'B'},
//                                                  {12, 'C'}, {13, 'D'},{14, 'E'},{15, 'F'}};
//     auto toHex = [&](int value) -> std::string {
//       auto hex = std::string{};
//       constexpr auto base = 16;

//       if (value <= 0) {hex = "00";}
//       else if (value >= 255) {hex = "FF";}
//       else {
//         while (value) {
//           hex += hexValues[value % base];
//           value /= base;
//         }
//       }
//       if (hex.size() < 2) hex += '0';
//       std::reverse(hex.begin(), hex.end());
//       return hex;
//     };
    
//     return toHex(r) + toHex(g) + toHex(b);
// }