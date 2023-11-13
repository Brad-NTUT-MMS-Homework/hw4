#include <stdio.h>

int main(void) {
	char arr[5];
	printf("    array = %p\n&array[0] = %p\n   &array = %p\n", arr, &arr[0], &arr);

	return 0;
}