#include<stdio.h>
int main()
{
    int weight;
    printf("enter the weight of the boxer:");
    scanf("%d", &weight);
    if(weight<115)
    {
        printf("the boxer is flyweight");
    }
    else if(weight>=115 && weight<=121)
    {
        printf("the boxer is bantamweight");
    }
    else if(weight>=122 && weight<=153)
    {
        printf("the boxer is featherweight");
    }
    else if(weight>=154 && weight<=189)
    {
        printf("the boxer is middleweight");
    }
    else if(weight>=190)
    {
        printf("the boxer is heavyweight");
    }

}