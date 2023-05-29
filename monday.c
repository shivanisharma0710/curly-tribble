#include<stdio.h>
int main()
{
    int leapdays,firstday,yr;
    long int normaldays,totaldays;
    printf("enter year:");
    scanf("%d",&yr);
    normaldays=(yr-1)*365L;
    leapdays=(yr-1)/4-(yr-1)/100+(yr-1)/400;
    totaldays=normaldays+leapdays;
    firstday=totaldays%7;

    if(firstday==0)
    printf("monday\n");
    if(firstday==1)
    printf("tuesday\n");
    if(firstday==2)
    printf("wednesday\n");
    if(firstday==3)
    printf("thursday\n");
    if(firstday==4)
    printf("friday\n");
    if(firstday==5)
    printf("saturday\n");
    if(firstday==6)
    printf("sunday\n");
}