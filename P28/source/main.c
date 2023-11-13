#include <stdio.h>

#define SIZE 5

void modifyArr(int b[], int size) {
	for (int i = 0; i < size; i++)
		b[i] *= 2;
}

void modifyElement(int e) {
	printf("Value in modifyElement is %d\n", e *= 2);
}

int main() {
	int a[SIZE] = { 0,1,2,3,4 };

	puts("Effects of passing entire array by reference:\n\nThe"
		"values of the original array are:\n");

	for (int i = 0; i < SIZE; i++)
		printf("%3d", a[i]);
	puts("");

	modifyArr(a, SIZE);
	puts("The values of the modified array are");
	for (int i = 0; i < SIZE; i++)
		printf("%3d", a[i]);

	printf("\n\n\nEffects of passing array element"
		"by value:\n\nThe value of a[3] is %d\n", a[3]);
	modifyElement(a[3]);
	printf("The values of a[3] is %d\n", a[3]);

	return 0;
}
