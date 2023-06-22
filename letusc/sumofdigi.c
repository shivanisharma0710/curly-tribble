#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int d1 = n%10;
    // printf("%d\n", d1);
    int d2 = (n%100)/10;
    // printf("%d\n", d2);
    int d3 = (n%1000)/100;
    // printf("%d\n", d3);
    int d4 = (n%10000)/1000;
    // printf("%d\n", d4);
    int d5 = (n%100000)/10000;
    // printf("%d\n", d5);
    printf("%d", d1+d2+d3+d4+d5);
    return 0;
}