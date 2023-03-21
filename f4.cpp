#include <stdio.h>

/*int flou(int n) {
	if (n == 1 || n == 2) {
		return 1;
	} else {
		return flou(n - 1) + flou(n - 2);
	}
}*/


int main() {
//	int res = 0;
//	for (int i = 1; i <= 10; i++)
//		printf("%d ", flou(i) );
	int a = 1;
	int b = 1;
	for (int i = 1; i <= 10; i++) {
		a = a + b;
		b = b + a;
		printf("%d %d ", a, b);

	}
	return 0;
}
