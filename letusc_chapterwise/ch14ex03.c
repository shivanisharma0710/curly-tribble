#include<stdio.h>
int main()
{
    int i,j,mat[4][4], tran[4][4];
    printf("enter the elements of matrix:\n");
    for(i=0;i<4;i++)
     for(j=0;j<4;j++)
     scanf("%d",&mat[i][j]);

    for(i=0;i<4;i++)
     for(j=0;j<4;j++)
     tran[i][j]=mat[j][i];

    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
        {
        printf("%d", tran[i][j]);
        printf(" ");
        }
        printf("\n");
    }

}