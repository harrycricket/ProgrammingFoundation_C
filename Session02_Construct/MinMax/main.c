#include <stdio.h>
#include <stdlib.h>

/* 
	Viết app tìm số lớn nhất trong 2 con số cho trước nhập từ một bàn phím
	IPO:
	I: để làm bài này cần gì? Cần 2 số nào đó, cần 2 biến
	P: giả sử a = 5, b = 1
	   so sánh để biết ai lớn hơn, nhỏ hơn
	   if (a > b) thì max = a, in ra
	   ngược lại thì a <= b
	   if (a < b) thì max = b, in ra
	   else 2 đứa mình bằng nhau
	O: muốn đạt được điều gì? a hay b lớn hơn, in ra
*/
int main(int argc, char *argv[]) {
	int a, b;
	printf("This program will show the maxium value of two numbers\n");
	printf("Please input two numbers: ");
	scanf("%d%d", &a, &b);
	// dấu cách hoặc enter phân biệt các value khi nhập, enter còn dùng để kết thúc nhập
	if (a > b)
		printf("The max value of %d and %d is %d\n", a, b, a);
	else if (a < b)
		printf("The max value of %d and %d is %d\n", a, b, b);
	else 
		printf("Does not exist the max value because %d equal to %d", a, b);
	return 0;
}