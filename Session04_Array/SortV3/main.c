#include <stdio.h>
#include <stdlib.h>

// tìm min của 1 mảng 10 con số và đổi chỗ với thằng đầu mảng
// IPO: 
// I: -5, 10, 100, -50, 1000, 1, -50, 1001  
// P:
// O: min (-50), pos 
int main(int argc, char *argv[]) {
	int a[] = {50, 10, 100, -50, 1000, -50, 1, 1001};
	int t;
	
	for (int i = 1; i < 8; i++)
		if (a[0] > a[i])
		{
			t = a[0];
			a[0] = a[i];
			a[i] = t;
		//	break; thử xem có đúng với 2 giá trị đầu tiên k
		}
		
	printf("After swapping the min value, the array now is\n");
	for (int i = 0; i < 8; i++)
		printf("%5d", a[i]);
	return 0;
}