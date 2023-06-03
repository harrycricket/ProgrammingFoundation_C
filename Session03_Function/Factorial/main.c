#include <stdio.h>
#include <stdlib.h>

/*
	viết hàm tính n!
	IPO
	I: n
	P: 1.2.3...n --> nhồi heo đất, nhồi theo kiểu nhân k phải cộng
	O: kết quả nhân dồn
	chọn hàm loại mấy vì có 4 loại?
*/

void getFactorialV1();
void getFactorialV2(int n);
int getFactorialV3();
int getFactorialV4(int n); // soái ca

int main(int argc, char *argv[]) {
//	getFactorialV1();
//	getFactorialV2(6);
//	int result = getFactorialV3();
//	printf("result: %d", result);
//	printf("result: %d", getFactorialV3()); //in acc qua hiện thân tên hàm
	getFactorialV4(5); // nếu in k reuse được tốt nhất
	printf("result: %d", getFactorialV4(5));
	return 0;
}

	
int getFactorialV4(int n)	
{
	int acc = 1;

	if (n == 0 || n == 1)
		acc = 1;
	else
		for (int i = 2; i <= n; i++)
			acc *= i;
	
//	printf("%d! = %d\n", n, acc); // k nên in khi hàm trả về giá trị
	return acc;
}	
	
int getFactorialV3()	
{
	int n, acc = 1; // 0 dành cho tổng dồn, tích thì ban đầu tệ nhất = 1
	printf("Input a number (>= 0) to get the factorial: ");
	scanf("%d", &n); // có khả năng nhập sai - Validation

	if (n == 0 || n == 1)
		acc = 1;
	else // tạm thời chưa chặn n < 0, coi như n >= 2
		for (int i = 2; i <= n; i++)
			acc *= i;
			
//	return acc; //do hàm k return nên phải in ra
	printf("%d! = %d\n", n, acc); // k nên in khi hàm trả về giá trị
	return acc;
}

void getFactorialV1()	
{
	int n, acc = 1; // 0 dành cho tổng dồn, tích thì ban đầu tệ nhất = 1
	printf("Input a number (>= 0) to get the factorial: ");
	scanf("%d", &n); // có khả năng nhập sai - Validation

	if (n == 0 || n == 1)
		acc = 1;
	else // tạm thời chưa chặn n < 0, coi như n >= 2
		for (int i = 2; i <= n; i++)
			acc *= i;
			
//	return acc; do hàm k return nên phải in ra
	printf("%d! = %d\n", n, acc);
}

void getFactorialV2(int n)
{
	int acc = 1; // 0 dành cho tổng dồn, tích thì ban đầu tệ nhất = 1

	if (n == 0 || n == 1)
		acc = 1;
	else // tạm thời chưa chặn n < 0, coi như n >= 2
		for (int i = 2; i <= n; i++)
			acc *= i;
			
//	return acc; do hàm k return nên phải in ra
	printf("%d! = %d\n", n, acc);
}



