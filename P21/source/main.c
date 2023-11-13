#include <stdio.h>

void staticArrInit();
void automaticArrInit();

int main() {
	printf("First call to each function:\n");
	staticArrInit();
	automaticArrInit();

	printf("\n\nSecond call to each function:\n");
	staticArrInit();
	automaticArrInit();

	puts("");

	return 0;
}

void staticArrInit() {
	static int arr1[3];

	puts("\nValues on entering staticArrayInit:");
	for (int i = 0; i <= 2; i++)
		printf("array1[%d] = %d ", i, arr1[i]);

	puts("\nValues on exiting staticArrayInit:");
	for (int i = 0; i <= 2; i++)
		printf("array1[%d] = %d ", i, arr1[i] += 5);
}

void automaticArrInit() {
	int arr2[3] = {1,2,3};

	puts("\n\nValues on entering automaticArrayInit:");
	for (int i = 0; i <= 2; i++)
		printf("array1[%d] = %d ", i, arr2[i]);

	puts("\n\nValues on exiting automaticArrayInit:");
	for (int i = 0; i <= 2; i++)
		printf("array1[%d] = %d ", i, arr2[i] += 5);
}