#include <stdio.h>
#include <string.h>

void dele(char *a, char *str) {
	int len = strlen(str);
	char c = *a;
	int j = 0;
	for (int i = 0; i < len; i++) {
		if (*(str + i ) == *a) {
			continue;
		}
		*(str + j) = *(str + i);
		j++;

	}
	str[j] = '\0';
}

int main() {
	char str[] = "iloveese";
	char c ;
	c = 'e';
	char *s = &c;

	dele(s, str);
	printf("%s\n", str);


	return 0;
}
