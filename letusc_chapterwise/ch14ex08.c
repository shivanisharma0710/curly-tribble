#include<stdio.h>
#define n 3
int main()
{
    int i,j,mat[n][n], tran[n][n];
    printf("enter the elements of %d matrix by %d matrix\n",n,n);
    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        scanf("%d",&mat[i][j]);
      }
    }

     for(i=0;i<n;i++)
     {
        for(j=0;j<n;j++)
        {
            if(mat[i][j]!=mat[j][i])
            {
            printf("this is not a symmetric matrix\n");
            return 0;
            }
            else
            continue;
       }
     }
     if(i==n)
     printf("the matrix is symmetric\n");
}