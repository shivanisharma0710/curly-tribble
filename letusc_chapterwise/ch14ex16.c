#include<stdio.h>
int main()
{
  float x[10]={3.0,4.5,5.5,6.5,7.5,8.5,8.0,9.0,9.5,10.0};
  float y[10]={1.5,2.0,3.5,5.0,6.0,7.5,9.0,10.5,12.0,14.0};
  int size = 10, n=size ;
  float a,b,xbar,ybar;

  float sx=0;
  for(int i =0; i< size; i++)
  { 
    sx= sx+ x[i];
  }

  float sy=0;
  for(int i=0;i< size;i++)
  {
    sy = sy + y[i];
  }

  float sxy=0;
  for(int i=0; i< size; i++)
  {
    sxy= sxy + (x[i]*y[i]);
  }

  float sx2;
  for(int i=0;i<size;i++)
  {
    sx2= sx2 + (x[i]*x[i]);
  }
  xbar = sx / n;
	ybar = sy / n;

	b = (n*sxy - sx*sy) / (n*sx2 - sx*sx);
	a = ybar - b*xbar;

	printf("\nRequired equation is\n\ny = %.2lf + %.2lfx", a, b);

}
