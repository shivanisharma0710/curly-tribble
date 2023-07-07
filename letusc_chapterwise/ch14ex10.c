#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],mul[3][3],i,j;
    printf("enter the first matrix: \n");
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     scanf("%d", &a[i][j]);
    }

    printf("enter the second matrix: \n");
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     scanf("%d", &b[i][j]);
     }

    for (i = 0; i<3; i++)
		for (j = 0; j<3; j++)
			mul[i][j] = a[i][j] * b[i][j];

    printf("multiplication of the two matrices:\n");
    for (i = 0; i<3; i++)
    {
      for (j = 0; j<3; j++)
      {
        printf("%d", mul[i][j]); printf("  ");
      }
    printf("\n");
    }
}
  