#include <stdio.h>

#define MAX_LINE_LENGTH 1000

int getLine(char line[], int maxLine);
void removeTrailingBlanks(char line[], int length);
int isBlankLine(const char line[], int length);

int main() {
    char line[MAX_LINE_LENGTH];
    int length;

    while ((length = getLine(line, MAX_LINE_LENGTH)) > 0) {
        if (!isBlankLine(line, length)) {
            removeTrailingBlanks(line, length);
            printf("%s", line);
        }
    }
    
    return 0;
}

int getLine(char line[], int maxLine) {
    int c, i;

    for (i = 0; i < maxLine - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        i++;
    }
    line[i] = '\0';

    return i;
}

void removeTrailingBlanks(char line[], int length) {
    int i;

    for (i = length - 2; i >= 0 && (line[i] == ' ' || line[i] == '\t'); i--) {
        line[i] = '\0';
    }
}
int isBlankLine(const char line[], int length) {
    int i;

    for (i = 0; i < length - 1; i++) {
        if (line[i] != ' ' && line[i] != '\t') {
            return 0; 
        }
    }
    return 1; 
}






