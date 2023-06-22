#include <stdio.h>
float FtoC(float f)
{
  float c;
  
  c = (5.0 / 9.0) * (f - 32.0);
  return c;
}
int main()
{
  int fahr, celsius;
  int lower, upper, step;
  lower = 0;
  upper = 300;
  step = 20;
  fahr = lower;
  while(fahr <= upper)
  {
    celsius = FtoC(fahr);
    printf("%d \t %d \n", fahr, celsius);
    fahr = fahr + step;
  }
}
