#include <stdio.h>

int addbyone(int &xref) {
	xref++;
	printf("xref=%d\n", xref);
	return xref;
}

void main() {
	int x = 100, y = addbyone(x);
	printf("x=%d\n", x);
}

