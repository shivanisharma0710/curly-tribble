#include<stdio.h>
#include<math.h>
int main()
{
    float temp,vel,wcf;
    printf("enter temperature and velocity:");
    scanf("%f%f",&temp,&vel);
    wcf=35.74+0.6215*temp+(0.4275*temp-35.75)*pow(vel,0.16f);
    printf("wind chill factor=%f\n",wcf);


}