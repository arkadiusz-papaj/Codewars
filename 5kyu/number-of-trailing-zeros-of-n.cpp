 #include <cmath>

 [[nodiscard]] constexpr auto zeros(long n) -> long {
  if (n < 0) return -1;

  long count {0};
  constexpr int divisor {5};

  for (int i = divisor; n / i >= 1; i *= divisor){
    count += std::floor(n / i);
  }

  return count;
}