#include <stdio.h>

void inverse(int *b) {
	int tmp[3];
	for (int i = 0; i < 3; i++)
		tmp[2 - i] = b[i];
	for (int i = 0; i < 3; i++)
		b[i] = tmp[i];
}

int main() {
	int a[]= { 3,5,7 };
	
	for (int i = 0; i < 3; i++)
		printf("%d\t", a[i]);
	puts("");

	inverse(a);

	for (int i = 0; i < 3; i++)
		printf("%d\t", a[i]);
	puts("");

	return 0;
}