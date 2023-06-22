#include <stdio.h>
#define TAB_STOP 4 
int main() {
    int c;
    int position = 0;
    while ((c = getchar()) != EOF)
     {
        if (c == '\t') {
        int spaces = TAB_STOP - (position % TAB_STOP);
    for (int i = 0; i < spaces; i++) {
        putchar(' ');
        position++;
            }
        } else if (c == '\n') {
        putchar(c);
        position = 0;
        } 
        else {
         putchar(c);
        position++;
        }
    }
    return 0;
}