#include <stdio.h>
#define SIZE 10

int main() {
	int s[SIZE];

	for (int i = 0; i < SIZE; i++)
		s[i] = 2 + 2 * i;
	
	printf("%s%13s\n", "Element", "Value");

	for (int i = 0; i < 10; i++)
		printf("%7d%13d\n", i, s[i]);

	return 0;
}