[[nodiscard]] auto digital_root(int n) -> int
{
  int sum = 0;
  
  while (n)
  {
    sum += n % 10;
    n = n / 10;
  }
  
  return (sum > 9) ? digital_root(sum) : sum;
}