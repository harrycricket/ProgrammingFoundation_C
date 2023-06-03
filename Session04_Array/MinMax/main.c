#include <stdio.h>
#include <stdlib.h>

// tìm và in ra giá trị lớn nhất, nhỏ nhất trong mảng 10 phần tử
// IPO:
// I: -5, 10, 50, 100, -50, 1000, 1, -5, 1001, 10
// P: min = [0] = -5
// quét mảng từ vị trí [1] trở đi
// if [1] < min, nếu có thì min là [1], k thì thôi
// if [2] < min, nếu có thì min là [2], k thì thôi
// if [n - 1] < min, nếu có thì min là [n - 1], k thì thôi
// O: min, max

int main(int argc, char *argv[]) {
	int a[] = {-5, 10, 50, -50, 1000, 1, -50, 1001, 1, 10};
	int min = a[0];
	int max = a[0];
	for (int i = 1; i < 10; i++)
	{
		if(a[i] < min)
			min = a[i];
	//	(a[i] < min) ? (min = a[i]) : min;
		(a[i] > max) ? max = a[i] : max;
	}
	printf("The min value of this array is: %d\n", min);
	printf("The max value of this array is: %d\n", max);
	return 0;
}