#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 10, b = 3;
	int result = a * b; // result là vùng ram chứa kết quả tính toán
	printf("The result = %d\n", result);
	result = a / b;
	printf("result / = %d\n", result);
	
	float r = a / b;
	printf("r / = %f\n", r);
	
	float rr = 1.0 * a / b; // a / (b * 1.0);
	printf("rr / = %f\n", rr);
	
	
	int n = 10; //1 vùng ram tên là n và chứa on, off để ra được số 10 ngoài đời
	printf("n = %d\n", n);
	// 1. tui muốn tăng n lên 1 đơn vị
//	n = 11; // k đúng vì cách này là gán n = giá trị mới 11
//	printf("after increasing 1, n = %d\n", n);
	n = n + 1; // n += 1; tăng tự thân, tài sản tự tăng lên
	printf("#1: after increasing 1, n = %d\n", n);
	
	// 2. tui lại muốn tiếp tục tăng lên 1 nữa
	n += 1; // tăng chính n lên 1 đơn vị
	printf("#2: after increasing 1, n = %d\n", n);
	
	// 3. tui lại muốn tăng n lên 8 đơn vị nữa
	n += 8;
	printf("#3: after increasing 8, n = %d\n", n);
	
	//4. tui muốn tăng n lên 1 đơn vị nữa
	n++ ; // ++ n; n += 1; n = n + 1;
	printf("#4: after increasing 1, n = %d\n", n);
	
	int m = 10;
	printf("m = %d\n", m);
	//int r1 = m++; // biến cần value -> m = 11, r1 = 10
	//int r1 = m + 1; m vẫn 10, r1 = 11;
	int r1 = ++m; // m và r1 = 11
	printf("m = %d, r1 = %d\n", m, r1);
	return 0;
}