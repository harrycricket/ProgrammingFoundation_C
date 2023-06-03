#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// 1. 5 > 4 đúng k
	int result = 5 > 4;
	printf("5 > 4? %d\n", result);
	// 2. 5 < 4 đúng hông?
	result = 5 < 4;
	printf("5 < 4? %d\n", result);
	// 3. 10 bằng 10 đúng k
	result = 10 == 10;
	printf("10 = 10? %d\n", result);
	// 4. 100 > 100 đúng k
	result = 100 > 100;
	printf("100 > 100? %d\n", result);
	// 5. 100 >= 100 đúng k
	result = 100 >= 100;
	printf("100 >= 100? %d\n", result);
	// 6. 100 khác 100 đúng k
	result = 100 != 100;
	printf("100 <> 100? %d\n", result);
	
	// 7. cho 2 biến a và b với 2 giá trị nào đó và hãy so sánh chúng
	int a = 10, b = 3;
	// 8. Hỏi a có bằng b hay k?
	result = a == b;
	printf("a = b? %d\n", result);
	// 9. a khác b đúng k
	result = a != b;
	printf("a <> b? %d\n", result);
	// 10. a khác 100 đúng k
	result = a != 100;
	printf("a <> 100? %d\n", result);
	
	// 11. dùng so sánh để ta quyết định làm gì đó
	/*
		nếu tuổi của bạn < 20, con nít
		>= 20, trưởng thành
	*/
	int age = 18;
	if(age >= 20)
		printf("Truong thanh\n");
	if(age < 20)
		printf("Con ni''t");
	return 0;
}