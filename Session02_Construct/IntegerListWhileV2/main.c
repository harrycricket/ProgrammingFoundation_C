#include <stdio.h>
#include <stdlib.h>

/*
	viết app tính tổng các số từ 1...100 và in ra kq
	IPO
*/
int main(int argc, char *argv[]) {
	
	int sum = 0;
	printf("This program will show/ compute the sum of integer from 1 to 100\n");
	for (int i = 1; i <= 100; i++)
		sum += i;
	printf("Sum (FOR): %d\n", sum);
	
	sum = 0; //k reset sẽ bị dính hiệu ứng lề
	int count = 1;
	do 
	{
		sum += count;
		count++;
	} while (count <= 100);
	printf("Sum (DO WHILE): %d\n", sum);
	
	
	return 0;
}