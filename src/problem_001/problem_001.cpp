#include <iostream>
#include <stdint.h>

int main()
{
  uint32_t sum = 0;

  for (uint32_t val = 0; val < 1000; val++) 
  {
    if (!(val % 3) || !(val % 5))
    {
       sum = sum + val;
    }
    else 
    {
      // do nothing
    }
  }

  std::cout << sum << "\n";
}
