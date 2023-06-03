#include <stdio.h>
#include <stdlib.h>

// tìm min của 1 mảng 10 con số
// trả lời rằng min nằm ở vị trí thứ mấy trong mảng
// IPO: 
// I: -5, 10, 100, -50, 1000, 1, -50, 1001  
// P:
// O: min (-50), pos 
int main(int argc, char *argv[]) {
	int a[] = {-5, 10, 100, -50, 1000, -50, 1, -1001};
	int min = a[0];
	int pos = 0; // cực kỳ lưu ý, nếu k gán pos = 0 thì có thể chạy bị sai
	for (int i = 1; i < 8; i++)
		if (a[i] < min)
		{
			min = a[i];
			pos = i;	// nhớ lại vị trí i ngay
		}
	printf("The min value is %d and it is at the position of %d\n", min, pos);
		
	return 0;
}