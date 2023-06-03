#include <stdio.h>
#include <stdlib.h>

/* 
	viết app mô phỏng lại hàm toán học y = f(x) = x^2
	viết hàm nhận vào một số nguyên, trả về bình phương của số đó
	IPO: 
	I: x
	P: x^2
	O: in ra y = x^2
*/

void fV1();
/* 
	liên quan đến đầu vào và đầu ra
	toán học ta chỉ nói hàm y = f() = ...
*/

// Version 1: k ra k vào trên tên hàm 		void f()
// Version 2: k ra có vào trên tên hàm 		void f(x...)

void fV2(int x);


int main(int argc, char *argv[]) {
	
	// dùng hàm	
//	fV1();
//	fV1();
// tính 10 lần cái bình phương
//	for (int i = 0; i < 10; i++)
//		fV1();
	fV2(5);
	fV2(-5); // có mùi của hard-code, k linh hoạt từ bàn phím
			 // xài trực tiếp là như hiện nay
			 // xài linh hoạt từ bàn phím ok luôn
			 // xét về bản chất, tao cần 1 con số, tao k nói con số đó đến từ đâu
			 // còn cách qua bàn phím, gán value cho x từ bàn phím
			
	for (int i = 0; i <= 9; i++)
		
	return 0;
}

// hàm trong lập trình là 1 nhóm các câu lệnh làm 1 việc gì đó và được đặt 1 cái tên
// là 1 nhóm lệnh được đặt tên và làm 1 việc gì đó
// tạo ra hàm, tạo ra quy tắc biến đổi
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

void fV2(int x) // x coi như đã có value
				// ~~ f(x) bên toán học f(5) ~~ x = 5
				// xài hàm thì chỉ việc đưa thẳng value cho x
				// k cần scanf() vì x đại diện cho 1 con số đầu vào
				// chỉ có thằng ngáo mới làm lệnh scanf()
				// coi như x đã có value ==> xài luôn
{
	int y = x * x;
	printf("\nThe function y = f(x) = x^2\n\t\t f(%d) = %d", x, y);
}


