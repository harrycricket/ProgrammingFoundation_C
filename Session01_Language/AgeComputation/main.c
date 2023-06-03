#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
	viết app tính tuổi của bất kì ai dựa trên năm sinh nhập từ bàn phím
	công thức: 2022 - yob, currentYear - yob
	cần thêm biến: tuổi để lưu lại tuổi 
*/
int main(int argc, char *argv[]) {
	int yob, age; //tui xin 2 vùng ram
	printf("Year of birth: %d\n", yob);
	/* 
		khi khai báo biến giống như mua đất, vùng ram
		trong đây có on-off của ai đó để lại
		giá trị này gọi là giá trị rác, GARBAGE VALUE
		khai báo biến mà k gán value 
		ráp vào công thức xài luôn sẽ lấy value bậy để tính
	*/
	printf("Input your yob: ");
	scanf("%d", &yob);
	age = 2022 - yob;
	printf("As I guess, your age is %d\n", age);
	/*
		in biến là in value
		scanf phải dùng & để cung cấp địa chỉ
	*/
	return 0;
}