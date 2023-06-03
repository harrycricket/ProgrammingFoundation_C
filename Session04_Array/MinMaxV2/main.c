#include <stdio.h>
#include <stdlib.h>

// Nhập 1 mảng từ bàn phím sau đó in ra min max

int main(int argc, char *argv[]) {
	int a[10]; // ta có 10 biến từ a[0] --> a [9]
	int min, max;
	printf("Input the numbers of the array: \n");
	for (int i = 0; i < 10; i++)
	{
		printf("Input number #%d: ", (i + 1));
		scanf("%d", &a[i]);
	}
	printf("You have just input the following numbers:\n");
	for (int i = 0; i < 10; i++)
		printf("%5d", a[i]);
	
	min = a[0]; // gán sau khi khai báo là sai vì mảng chưa có value
	max = a[0];
	
	for (int i = 1; i < 10; i++)
	{
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];	
	}
	printf("\nThe min value of this array is %d\n", min);
	printf("The max value of this array is %d\n", max);
	return 0;
}