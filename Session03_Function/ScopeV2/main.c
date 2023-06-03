#include <stdio.h>
#include <stdlib.h>

int yob = 2002;

void printYob();
void printfCurrentYob();

int main(int argc, char *argv[]) {
	printYob(); 
	printf("Global yob = %d\n", yob); // 2002 toàn cục 
	return 0;
}

void printYob()
{
	int yob = 2005; 	// biến local trùng tên biến toàn cục thì hàm xài biến yob thì xài yob nào?
				// ưu tiên local
	int age = 2022 - yob;
	
	printf("Your yob = %d and your age = %d\n", yob, age);
}

void printfCurrentYob()
{
	// thử mon men xem biến nhà khác được k
//	printf("Your age is: %d\n", age); 	// tui muốn xem biến age của hàm printfYob();
										// biến age là biến cục bộ nên hàm khác k được dùng khi chưa khai báo
}