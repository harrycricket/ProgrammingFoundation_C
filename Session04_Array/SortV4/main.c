#include <stdio.h>
#include <stdlib.h>

// mảng có bao nhiêu biến thì for < số biến là ổn

int main(int argc, char *argv[]) {
	int a[] = {50, 10, 100, -50, -50000};
	int t;
	
	for (int i = 1; i < 5; i++)
		if (a[0] > a[i])
		{
			t = a[0]; 
			a[0] = a[i];
			a[i] = t;
		}
	// Loại bỏ a[0] đã min rồi , ta xem phần còn lại	
	// tính từ a[1] trở đi
	for (int i = 2; i < 5; i++)
		if (a[1] > a[i])
		{
			t = a[1]; 
			a[1] = a[i];
			a[i] = t;
		}
	//loại bỏ a[0], a[1] đã xong
	for (int i = 3; i < 5; i++)
		if (a[2] > a[i])
		{
			t = a[2]; 
			a[2] = a[i];
			a[i] = t;
		}
	for (int i = 4; i < 5; i++)
		if (a[3] > a[i])
		{
			t = a[3]; 
			a[3] = a[i];
			a[i] = t;
		}
	
	printf("After swapping the min value, the array now is\n");
	for (int i = 0; i < 5; i++)
		printf("%5d", a[i]);
	return 0;
}