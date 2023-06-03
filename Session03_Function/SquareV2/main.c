#include <stdio.h>
#include <stdlib.h>

void fV1();

// Version 1: k ra k vào trên tên hàm 		void f()
// Version 2: k ra có vào trên tên hàm 		void f(x...)

void fV2(int x);


int main(int argc, char *argv[]) {
	int n;
	printf("Please input an integer to get a^2\n");
	printf("Input n: ");
	scanf("%d", &n);
	// có n từ bàn phím rồi, nó là 1 value ta sẽ đưa vào hàm
	fV2(n);
	
	return 0;
}

void fV1()
{
	// quy tắc biến đổi, xử lí vào ra của hàm ở đây
	int x, y;
	printf("\nPlease input an integer to get x^2:\n");
	printf("Input x: ");
	scanf("%d", &x);
	
	y = x * x;
	
	printf("The function y = f(x) = x^2\n\t\t f(%d) = %d", x, y);
}

void fV2(int x)
{
	int y = x * x;
	printf("\nThe function y = f(x) = x^2\n\t\t f(%d) = %d", x, y);
}


