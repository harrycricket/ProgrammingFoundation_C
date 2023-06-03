#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// có 2 loại hàm:
//1. hàm có sẵn mà thiên hạ viết sẵn rồi cho mình xài
// PRE-DEFINED FUNCTIONS
// tolwr(kí tự) --> chữ thường
// sqrt(con số) --> căn bậc 2
// abs(con số) --> trị tuyệt đối
// pow(a, b) --> trả về a^b
// sin(độ góc cung) --> trả về sin bên lượng giác
// đặt hàm này vào những ngăn tủ, cốp xe để phân loại
// ngăn tủ trong C chứa những hàm được phân loại rồi thì gọi là thư viên .h
// include <math.h> ta sẽ ngăn math chứa 1 đống hàm toán học cho mình dùng
// hầu hết hàm loại 4, re-use 
// #include <ctype.h> mở ngăn toàn là hàm xử lí ASCII
// #include <string.h> mở ngăn toàn là hàm xử lí chuỗi, string
// mình có thể làm .h của riêng mình


//2. hàm tự làm, nhận vào và trả về, giống hàm nhà người ta
// CUSTOM FUNCTIONS 
// getFactorial()

int main(int argc, char *argv[]) {
	// tui muốn lấy căn bậc 2
	// double sqrt(double x)
	// int    getF(int    n)
	// y 	= 	f(		  x)	
	// sqrt(100); // chạy về nhưng k thèm in đou
	printf("Square root of 2 of %d = %.2lf\n", 100, sqrt(100));
	// bài cơ bản re-use: tính tổng căn 9 + căn 25 + căn 64
	double sum = sqrt(9) + sqrt(25) + sqrt(64);
	printf("Sum of square root: %.2lf\n", sum);
	
	// tính trị tuyệt đối của -5
//	int r = abs(-5);
//	printf("The absolute value of %d is %d", -5, r);
	printf("The absolute value of %d is %d", -50, abs(-50));
	return 0;
}