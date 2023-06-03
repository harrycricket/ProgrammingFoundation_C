#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int age = 21;
	// 1. Hỏi tuổi của bạn có là thanh xuân k [20;30]
 	int result = age >= 20 && age <= 30;
 	printf("result: %d\n", result);
 	
	if(age >= 20 && age <= 30)
		printf("You are in the thanh xuan\n");
	else 
		printf("You are too young or to old\n");
		
	// 2. Cho x là 1 con số nguyên với 1 giá trị nào đó nhập từ bàn phím
	// Hỏi xem x có nằm ngoài đoạn [1; 100] hay k
	int x;
	printf("Input a number.\nI will check if this number is out of the range [1; 100]\n");
	printf("Please input: ");
	scanf("%d", &x);
	result = x < 1 || x > 100;
	printf("Check range? In: 0, Out: 1 : %d\n", result);
	if(x < 1 || x > 100)
		printf("Your number %d is out of the range of [1;100]", x);
	else 
		printf("Your number %d is in of the range of [1;100]", x);
	return 0;
}