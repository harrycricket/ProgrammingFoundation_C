#include <stdio.h>
#include <stdlib.h>

/* 
	Tính tổng của các số tự nhiên từ 1...n
	IPO
	I: n?, k đưa n bố ai tính được
	P: nhồi heo đất
	   nếu đưa tiền vào heo 500k thì heo có tiền = tiền + 500k;
		
	O: in ra tổng
*/

int main(int argc, char *argv[]) {
	int n;
	int sum = 0;
	printf("This program will help you complete the sum of an integer list from 1 to n\n");
	printf("Please input a positive integer n > 1: ");
	scanf("%d", &n);
	if (n < 1)
		printf("Do you know how to input an integer > 1?");
	else
	{
		for (int i = 1; i <= n; i++)
		sum += i;
		printf("The sum of integer list from 1 to %d is %d", n, sum);
	}
	return 0;
}