#include <stdio.h>
#include <stdlib.h>

// tính tổng của các số từ 1...100

int sumIntegerList(int n);

int main(int argc, char *argv[]) {
	int n;
	do
	{
		printf("Input an integer n: ");
		scanf("%d", &n);
	} while (n <= 1);
	printf("The sum of the list from 1 to %d is %d", n, sumIntegerList(n));
	return 0;
}

int sumIntegerList(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;
	return sum;
}
