#include<stdio.h>
#include<math.h>
int main()
{
    float x[11]={34.22,39.87,41.85,43.23,40.06,53.29,53.29,54.14,49.12,40.71,55.15};
    float y[11]={102.43,100.93,97.43,97.81,98.32,98.32,100.07,97.08,91.59,94.85,94.65};
    int size = 11;
    float n=size, r;


float xsum=0;
for(int i=0;i<size;i++)
{
    xsum=xsum + x[i];
}

float ysum=0;
for(int i=0;i<size;i++)
{
    ysum=ysum + y[i];
}


float xysum=0;
for(int i=0;i<size;i++)
{
    xysum = xysum + (x[i]*y[i]);
}

float x2sum=0;
for(int i=0;i<size;i++)
{
    x2sum = x2sum + (x[i]*x[i]);
}

float y2sum=0;
for(int i=0;i<size;i++)
{
    y2sum = y2sum + (y[i]*y[i]);
}
	r = (xysum - xsum*ysum) / (sqrt((n*x2sum - xsum*xsum)*(n*y2sum - ysum*ysum)));
	printf("Coefficient of correlation (r) = %f", r);

}