#include <stdio.h>
#include <stdlib.h>

/* 
	tính tổng của dãy số từ 1...100
	I: rõ hết rồi nên k cần biến gì cả
	P: 1 + 2 + 3 + 4 + ... + 100 = sum
		sum = 0;
		cộng dồn sum và nhớ cái sum dồn đó
		THUẬT TOÁN CON HEO ĐẤT, cộng dồn vào 1 biến sum
		THUẬT TOÁN ỐC BƯU NHỒI THỊT/ ĐẬU HŨ DỒN THỊT
		Quan trọng ban đầu sum = 0 vì nếu k gán sum = 0 thì sẽ lấy giá trị rác trong RAM
	O: tổng của cả đám	
*/

int main(int argc, char *argv[]) {
	int acc = 0; // cực kì quan trọng
	// rác nhồi tiếp thì sẽ thành rác chứ k thành tổng
	
	printf("This program will show the accumulation of 100 first integers\n");
	for (int i = 1; i <= 100; i++)
		acc += i;
	printf("The sum is: %d\n", acc);
	return 0;
}