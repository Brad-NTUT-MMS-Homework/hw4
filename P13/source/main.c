#include <stdio.h>

void printArr(const int a[][3]) {
	for (int i = 0; i <=1 ; i++) {
		for (int j = 0; j <= 2; j++) {
			printf("%d ", a[i][j]);
		}
		puts("");
	}
}

int main() {
	int arr1[][3] = { {1,2,3},{4,5,6} }; 
	int arr2[][3] = { 1,2,3,4,5 };
	int arr3[][3] = { {1,2},{4} };

	printf("Values in array1 by row are:\n");
	printArr(arr1);

	printf("Values in array2 by row are:\n");
	printArr(arr2);

	printf("Values in array3 by row are:\n");
	printArr(arr3);

	return 0;
}