#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a, b, c, max;
	printf("Find max between 3 numbers\n");
	printf("Please input 3 integers: ");
	scanf("%d%d%d", &a, &b, &c);

	max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	printf("The max value is %d", max);
	return 0;
}