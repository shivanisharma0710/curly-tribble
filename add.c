#include<stdio.h>

int get_int(char const * msg)
{
    printf("%s", msg);
    int var1;
    scanf("%d", &var1);
    return var1;
}
int main(void)
{
   
   
   int x = get_int("x:");
   

   int y = get_int("y:");
  


   int z = x+y;
   printf("%d", z);
   
}