#include <stdio.h>




int main() {
	int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {3, 4, 5}};
	int (*a)[3] = &arr[0];


	return 0;
}
