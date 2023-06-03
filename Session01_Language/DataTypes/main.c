#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 10, b = 20;
	// 1. in ra các giá trị của a và b
	printf("a = %d, b = %d\n", a, b);
	// 2. hỏi rằng nhà của mỗi biến ở đâu trong ram
	printf("The address of a: %u, b address: %u\n", &a, &b);
	// 3. mỗi biến tại một thời điểm chỉ có một giá trị
	a = 69;
	printf("a = %d, b = %d\n", a, b);
	
	// chơi với số thực
	
	double c = 0.1, d = 3.14;
	// 1. value của 2 biến là gì
	printf("c = %lf, d = %lf\n", c, d);
	printf("c = %.2lf, d = %.2lf\n", c, d);
	// 2. nhà của 2 biến double ở đâu
	printf("c address: %u\nd address: %u\n", &c, &d);
	// C cung cấp 1 lệnh đặc biệt/ hàm giúp mình hỏi CPU 1 loại data type chiếm mấy byte
	int size = sizeof(int);
	/*
		hỏi CPU biến int chiếm mấy byte
		cất con số này vào trong biến size 
	*/
	printf("The number of bytes allocated for int: %d\n", size);
	printf("The number of bytes allocated for double: %d\n", sizeof(double));
	return 0;
}