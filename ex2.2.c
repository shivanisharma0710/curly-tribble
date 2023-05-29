#include<stdio.h>
int main(void)
int i=0;
int c;
while((c = getchar()) != EOF) {
   if(c == '\n')
      break;
   if(i >= lim - 1)
      break;
   s[i] = c;
   i++;
   
}