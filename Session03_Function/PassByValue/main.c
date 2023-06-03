#include <stdio.h>
#include <stdlib.h>

void f(int x);

int main(int argc, char *argv[]) {
	//f(5);
	int n = 10; // lẽ ra nên scanf(n) nhưng gán luôn cho tiện
	f(n);		// truyền thái y, truyền giá trị
	// in số nhà của n trong main()
	printf("In main, n address is: %u\n", &n);
	return 0;
}

void f(int x)
{
	int y = x * x;
	printf("y = x^2; y = f(%d) = %d\n", x, y);
	printf("In f(), x address is: %u\n", &x);
}