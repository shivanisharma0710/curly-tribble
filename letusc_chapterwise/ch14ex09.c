#include<stdio.h>
int main()
{
    int a[6][6],b[6][6],sum[6][6],i,j;
    printf("enter the first matrix: \n");
    for(i=0;i<6;i++)
    {
     for(j=0;j<6;j++)
     scanf("%d", &a[i][j]);
    }

    printf("enter the second matrix: \n");
    for(i=0;i<6;i++)
    {
     for(j=0;j<6;j++)
     scanf("%d", &b[i][j]);
    }

    for (i = 0; i<6; i++)
		for (j = 0; j<6; j++)
			sum[i][j] = a[i][j] + b[i][j];

    printf("sum of the two matrices:\n");
    for (i = 0; i<6; i++)
    {
      for (j = 0; j<6; j++)
      {
        printf("%d", sum[i][j]); printf("  ");
      }
      printf("\n");
    }
  }