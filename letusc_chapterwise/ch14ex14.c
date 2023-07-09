#include <math.h>
#include <stdio.h>

// printf("sin(pi/2) = %f", sin(M_PI/2));
int main()
{
  float area[6], maxarea;
  float a[6] = {137.4, 155.2, 149.3, 160.0, 155.6, 149.7};
  float b[6] = {80.9, 92.62, 97.93, 100.25, 68.95, 120.0};
  float angle[6] = {0.78, 0.89, 1.35, 9.00, 1.25, 1.75};

  for (int i = 0; i < 6; i++)
  {
    area[i] = (1.0 / 2.0) * a[i] * b[i] * sin(angle[i]);
  }

  for (int i = 0; i < 6; i++)
  {
    printf("%f", area[i]);
    printf("\n");
  }
  maxarea = area[0];
  for (int i = 1; i < 6; i++)
  {
    if (area[i] > maxarea)
    {
      maxarea = area[i];
    }
  }
  printf("maximum area is : %f", maxarea);
}