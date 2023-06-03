#include <stdio.h>
#include <stdlib.h>

// tính tổng của các số từ 1...100

int sumIntegerList();

int main(int argc, char *argv[]) {
	printf("The sum of the list from 1 to 100 is %d", sumIntegerList());
	return 0;
}

int sumIntegerList()
{
	int sum = 0;
	for (int i = 1; i <= 100; i++)
		sum += i;
	return sum;
}
