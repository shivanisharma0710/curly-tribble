#include<stdio.h>
int main()
{
    int div, sub;
    printf("Enter the class obtained by the student: ");
    scanf("%d", &div);

    printf("Enter the number of subject in which he has failed: ");
    scanf("%d", &sub);

    switch(div)
    {
        case 1:
            if(sub<=3)
            printf("He got the grace of %d marks",5*sub);
            else
                printf("He didn't get any grace");
        break;
        case 2:
            if(sub<=2)
                printf("He got the grace of %d marks",4*sub);
            else
                printf("He didn't get any grace");
        break;
        case 3:
            if(sub<=1)
                printf("He got the grace of %d marks",5*sub);
            else
                printf("He didn't get any grace");
        break;
    }
}