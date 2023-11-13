#include <stdio.h>

int main() {
	char str1[20], str2[] = "string literal";

	printf("Enter a string: ");
	scanf_s("%s", str1, sizeof(str1));

	printf("string1 is: %s\nstring2 is: %s\n"
		"string1 with spaces between characters is: \n",
		str1, str2);

	for (int i = 0; str1[i] != '\0'; i++)
		printf("%c ", str1[i]);
	
	return 0;
}