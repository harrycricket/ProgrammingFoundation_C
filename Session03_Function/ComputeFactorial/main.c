#include <stdio.h>
#include <stdlib.h>

int getFactorial(int n); 

int main(int argc, char *argv[]) {
	int n;
	do
	{
		printf("Input an integer n: ");
		scanf("%d", &n);
	} while (n <= 1);
	printf("The factorial of n: %d", getFactorial(n));
	return 0;
}

int getFactorial(int n)	
{
	int acc = 1;
	if (n == 0 || n == 1)
		return 1;
		
	for (int i = 2; i <= n; i++)
		acc *= i;
	return acc;
}	
	