#include<stdio.h>
#include<math.h>
int main()
{
    float lat1,lat2,lon1,lon2,d;
    printf("enter latitude and longtitude of place1:");
    scanf("%f%f",&lat1,&lon1);
    printf("enter latitude and longitude of place2:");
    scanf("%f%f",&lat2,&lon2);

    lat1=lat1*3.14/180;
    lat2=lat2*3.14/180;
    lon1=lon1*3.14/180;
    lon2=lon2*3.14/180;

    d=3963*acos(sin(lat1)*sin(lat2)+cos(lat1)*cos(lat2)*cos(lon2-lon1));
    printf("distance between place1 and place2:%f\n,d");
    



}