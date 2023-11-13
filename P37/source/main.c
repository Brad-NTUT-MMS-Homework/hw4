#include <stdio.h>

#define SIZE 100

int linearSearch(const int arr[], int key, int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == key)
			return i;
	}
	return -1;
}

int main() {
	int a[SIZE], searchKey, element;

	for (int i = 0; i < SIZE; i++)
		a[i] = 2 * i;

	puts("Enter integer search key:");
	scanf_s("%d", &searchKey, sizeof(searchKey));

	element = linearSearch(a, searchKey, SIZE);

	if (element != -1)
		printf("Found value in element %d\n", element);
	else
		puts("Value not found\n");

	return 0;
}