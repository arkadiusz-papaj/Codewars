int digital_root(int n)
{
  int sum = 0;
  
  while (n / 10)
  {
    sum += n % 10;
    n = n / 10;
  }
  sum += n % 10;
  
  if (sum / 10 == 0) return sum;
  else return digital_root(sum);
}