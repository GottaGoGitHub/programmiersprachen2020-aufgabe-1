#include <iostream>

int sum_multiples(int border)
{
  int res = 0;
  for(int i = 1; i <= border; ++i)
  {
    if(i % 3 == 0)
    {
      res += i;
    }
    else if(i % 5 == 0)
    {
      res += i;
    }
  }
  return res;
}

int main()
{
    std::cout << sum_multiples(2000);
    return 0;
}