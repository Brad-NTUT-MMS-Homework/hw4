#include <stdio.h>

void bubble_sort(int *array, int size);

int main() {
	int array[] = { 6, 9, 235, 106, 57, 43, 22, 51, 411 };
	int size = sizeof(array) / sizeof(array[0]);

	bubble_sort(array, size);

	for (int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}

	printf("\n");

	return 0;
}

void bubble_sort(int *array, int size) {
	// Flag to track if any swaps have occurred during the current iteration.
	int swapped = 1;

	// Loop until no swaps have occurred during an iteration.
	while (swapped) {
		swapped = 0;

		// Iterate over the array, comparing adjacent elements and swapping them if they are in the wrong order.
		for (int i = 0; i < size - 1; i++) {
			if (array[i] > array[i + 1]) {
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;

				// Set the flag to indicate that a swap has occurred.
				swapped = 1;
			}
		}
		size--; // (a) just assure that the each final pair won't run through again
		if (!swapped) { // (b) if first round passes, still not swapped, then the arr must be in the correct order :)
			break;
		}
	}
}
