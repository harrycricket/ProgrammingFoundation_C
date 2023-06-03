#include <stdio.h>
#include <stdlib.h>

//vùng ram này k cho thay đổi on/off: read only memory
const float PI = 3.14;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
	viết app tính diện tích hình tròn và in ra kết quả
	bán kính nhập từ bàn phím
	Formula: S = PI * r^2;
*/
int main(int argc, char *argv[]) {
	float r, area;
	printf("Input a radius: ");
	scanf("%f", &r);
//	area = 3.14 * r * r;
	area = PI * r * r;
	printf("The area of a disk (%f) is %f\n", r, area);
	// mặc định số thực in 6 phần thập phân
	printf("The area of a disk (%.2f) is %.2f\n", r, area);
	return 0;
}