# include <stdio.h>
# include <stdlib.h>
#include<conio.h>
int main( )
{
    FILE *fp;
    char another='y';
    struct emp
    {
        char name[40];
        int age;
        float bs;
    };
    struct emp e;
    fp= fopen("EMPLOYEE.DAT", "w");
    if(fp==NULL)
    {
        puts("cannot open file");
        exit(1) ;
    }
    while(another=='y')
    {
        printf("\n enter name,age and basic salary:");
        scanf("%s %d %f", e.name,&e.age,&e.bs);
        fprintf(fp,"%s %d %f\n", e.name,e.age,e.bs);

        printf("add another record(y/n)");
        fflush(stdin);
        another=getche();
    }
    fclose(fp);
return 0;
}
