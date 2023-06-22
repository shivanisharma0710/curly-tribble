#include<stdio.h>
#define MAXLEN	80 

void reverse(char s[]);

int main() {

	int c, i;
	char line[MAXLEN];
	i = 0;
	while ((c = getchar()) != EOF) {
		line[i] = c;
		i++;
		if (c == '\n' || i == (MAXLEN - 1)) {
			line[i-1] = '\0';
			reverse(line);
			i = 0;
		}
	}
}

void reverse(char s[]) {

	int i, n;
	char line[MAXLEN];

	for (i = 0; s[i] != '\0' && i < MAXLEN; ++i)
		;

	n = 0;
	if (i == 0 || s[i] == '\0')
		line[i] = '\0';

	if (i > 0)
		for (--i; i >=0; --i) {
			line[i] = s[n];
			n++;
		}

	printf("%s\n", line);
}

